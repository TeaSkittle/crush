// count number of lines in file
// Author: Travis Dowd
// Date: 3-22-2020

#include <stdio.h>

int main( int argc, char *argv[] ) {
  int lines = 0;
  if ( argc == 2 ) {
    static int c;
    FILE *f = fopen( argv[1], "r" );
    if ( f ) {
      while (( c = getc( f )) != EOF ) {      
	if ( c == '\n' ) { lines++; }
      } fclose( f ); 
    } else {
      perror( "lc" );
    } printf( "%d\n", lines );
  } return 0;
}
    
