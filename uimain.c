#include <stdio.h>
#include "draw.h"

int main() 
{
  puts("Welcome!");

  while (1) { // Infinite while loop

    fputs("Select which shape you want to print (Triangle = t, Square = s, Arrow = a, Chars(11x17) = c, Chars(5x7) = h ) or 'q' to quit\n> ", stdout);
    fflush(stdout);		/* stdout only flushes automatically on \n */
    int c;
    while ((c = getchar()) == '\n'); /* ignore newlines */
    if (c == EOF)		     /* terminate on end-of-file */
      goto done;

    // Given the user answer, select which method to call
    switch (c) {
    case 't':
      puts("You selected triangle:");
      print_triangle(5, 7);
      break;
    case 's':
      puts("You selected square:");
      print_square(5, 5);
      break;
    case 'c':
      puts("You selected chars with a 11x16 font:");
      for (char c = 'A'; c < 'D'; c++)
	print_char_11x16(c);
      break;
    case 'a':
      puts("You selected arrow:");
      print_arrow(5,9,7);
      break;
    case 'h':
      puts("You selected chars with a 5x7 font:");
       for (char z = 'A'; z < 'D'; z++)
        print_char_5x7(z);
      break;
    case 'q':
      puts("Bye!");
      goto done; 		/* terminate */
    case '\n':
      break;
    default:
      printf("Unrecognized option '%c', please try again!\n", c);
    }
  }

 done: // To exit from program
  return 0;
}
