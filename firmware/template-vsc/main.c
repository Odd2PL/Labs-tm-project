#define __AVR_ATmega328P__
#define F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  char x = 2;
  uint8_t X = 1;
  // init()
  DDRD |= 0xFF;
  X |= 0b00000001;
  
 
  
  while (1)
  {
    // loop();
     if (X == X)
  {_delay_ms(100);
    X = (X << 1);
    if (X == 0b10000000)
    {
     _delay_ms(100);
     X = 0b00000001;
    PORTD = ~X;
    }
    
  }
  }
}