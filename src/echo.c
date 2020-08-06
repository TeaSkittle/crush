// print argv[n] to stdout
// Author: Travis Dowd
// Date: 3-18-2020

#include <stdio.h>

int main( int argc, char *argv[] ) {
  // Why would I do this?!?!?!
  //int i;
  if ( argc > 0 ) {
    for ( int i = 1; i < argc; i++ ) {
      printf( "%s ", argv[i] );
      // the argc-- might be better
      //if ( i == argc - 1 ) { printf( "\n" ); }
      if ( i == argc-- ) { printf( "\n" ); }
    }
  } else {
    printf( "\n" );
  } return 0;
}
