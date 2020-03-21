// change directory to argv[1]
// Author: Travis Dowd
// Date: 3-18-2020
//
// Confusing note:
// This only changes directory for this proccess, so when ran
// by itself it doesn't change the directory of the current shell.
// But ran inside of this shell, it will change, but when shell
// is exited, you be be back where you started when shell was ran.
//

#include <stdio.h>
#include <unistd.h>

int main( int argc, char *argv[] ) {
  if ( argc == 2 ) {
    char s[100];
    chdir( argv[1] );
  } else {
    printf( "Not enough arguments.\n" );
  } return 0;
}
