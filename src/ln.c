// create a symlink for argv[1] at argv[2]
// Author: Travis Dowd
// Date: 8-6-2020
//
// Needs to be tested
//

#include <stdio.h>
#include <unistd.h>

int main( int argc, char *argv[] ) {
  if ( argc == 3 ) {
    link( argv[1], argv[2] );
  } else {
    perror( "ln" );
  }
  return 0;
}
