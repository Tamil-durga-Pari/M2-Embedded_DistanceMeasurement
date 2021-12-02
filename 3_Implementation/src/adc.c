int main(void)
{
    DDRA = 0xFF;
    DDRB = 0xFF;
    DDRD = 0b11111011;
    _delay_ms(50);
    
    GICR|=(1<<INT0);
    MCUCR|=(1<<ISC00);
    
    TCCR1A = 0;
    
    int16_t COUNTA = 0;
    char SHOWA [16];
    

    send_a_command(0x01); //Clear Screen 0x01 = 00000001
    _delay_ms(50);
    send_a_command(0x38);
    _delay_ms(50);
    send_a_command(0b00001111);
    _delay_ms(50);
    
    sei();
    
    while(1)
    {
        PORTD|=(1<<PIND0);
        _delay_us(15);
        PORTD &=~(1<<PIND0);
        
        COUNTA = pulse/58;
        send_a_string ("CIRCUIT DIGEST");
        send_a_command(0x80 + 0x40 + 0);
        send_a_string ("DISTANCE=");
        itoa(COUNTA,SHOWA,10);
        send_a_string(SHOWA);
        send_a_string ("cm    ");
        send_a_command(0x80 + 0);

    }
}

