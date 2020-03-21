// clear screen
// Author: Travis Dowd
// Date: 3-18-2020

#include <stdio.h>

int main ( void ) {
  printf( "\033[2J\033[H" );
  return 0;
}
