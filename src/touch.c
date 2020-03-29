// create an empty file named argv[1]
// Author: Travis Dowd
// Date: 3-18-2020

#include <stdio.h>

int main( int argc, char *argv[] ) {
  int ch = '\0';
  if ( argc > 0 ) {
    FILE *f = fopen ( argv[1], "w" );
    if ( f ) {
      fputc( ch, f );
    }
    fclose ( f );
  } else {
    perror( "touch" );
  } return 0;
}
