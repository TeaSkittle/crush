// Remove file( s )
// Author: Travis Dowd
// Date: 3-21-2020

#include <stdio.h>

int main( int argc, char *argv[] ){
  int i;
  if ( argc >= 1 ) {
    for ( i = 1; i < argc; i ++ ) {
      remove (argv[i] );
    }
  } return 0;
}
