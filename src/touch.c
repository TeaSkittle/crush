// create an empty file named argv[1]
// Author: Travis Dowd
// Date: 3-18-2020

#include <stdio.h>

int main( int argc, char *argv[] ) {
  // Why the ascci here?
  // https://stackoverflow.com/questions/11294850/the-ascii-value-of-0-is-same-as-ascii-value-of-0
  //int ch = '\0';
  int ch = 0;
  if ( argc > 0 ) {
    FILE *f = fopen( argv[1], "w" );
    if ( f ) {
      fputc( ch, f );
    } fclose( f );
  } else {
    perror( "touch" );
  } return 0; // returning 139?
}
