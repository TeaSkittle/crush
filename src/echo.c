// print argv[n] to stdout
// Author: Travis Dowd
// Date: 3-18-2020

#include <stdio.h>

int main( int argc, char *argv[] ) {
  int i;
  if ( argc > 0 ) {
    for ( i = 1; i < argc; i++ ) {
      printf( "%s ", argv[i] );
      if ( i == argc - 1 ) { printf( "\n" ); }
    }
  } else {
    printf( "\n" );
  } return 0;
}
