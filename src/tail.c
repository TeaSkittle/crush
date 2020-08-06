// print last 10 lines of file
// Author: Travis Dowd
// Date: 3-23-2020

#include <stdio.h>

int main( int argc, char *argv[] ) {
  int lines = 0;
  int rev_lines = 0;
  if ( argc == 2 ) {
    static int c; // Should c = 0 here?
    FILE *f = fopen( argv[1], "r" );
    if ( f ) {
      while (( c = getc( f )) != EOF ) {      
	if ( c == '\n' ) { lines++; }
      } rewind( f );
      printf( "\x1b[0;72A" ); // Move cursor up one
      while (( c = getc( f )) != EOF ) {      
	if ( c == '\n' ) { rev_lines++; }
	if ( rev_lines > ( lines - 11 )) { putchar( c ); }
      } fclose( f ); 
    } else {
      perror( "tail" ); }
  } return 0;
}
