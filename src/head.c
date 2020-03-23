// print top 10 lines of file
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
	if ( lines < 10 ) { putchar( c ); }
      } printf( "\n" );
      fclose( f ); 
    } else {
      printf( "Can't open file\n" );
    } 
  } return 0;
}
    
