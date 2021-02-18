#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

void print_char_11x16(char c)
{
  c -= 0x20;
    for (char col = 0; col < 16; col++) {
      for (char row = 0; row < 11; row++) {
       unsigned short rowBits = font_11x16[c][row];
       unsigned short colMask = 1 << (col); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
}

void print_char_5x7(char c)
{
  c -= 0x20;

  for (char col = 0; col < 7; col++) {
       for (char row = 0; row < 5; row++) {
      unsigned char rowBits = font_5x7[c][row];
      unsigned char colMask = 1 << (col); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
}

