#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

const int speed = 100;
const int x = 0b11111100;

int main(void) {
  DDRC |= (1 << PC5);
  DDRC |= (1 << PC4);
  DDRC |= (1 << PC3);
  DDRC |= (1 << PC2);

  while (1) {
    PORTC ^= (1 << PC5);
    _delay_ms(speed);
    PORTC ^= (1 << PC4);
    _delay_ms(speed);
    PORTC ^= (1 << PC3);
    _delay_ms(speed);
    PORTC ^= (1 << PC3);
    _delay_ms(speed);
  }

  return 0;
}
