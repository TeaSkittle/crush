// copy argv[1] to argv[2]
// Author: Travis Dowd
// Date: 3-18-2020

#include <stdio.h>

int main( int argc, char *argv[] ) {
  if ( argc == 3 ) {
     static char c;
     FILE *file1 = fopen( argv[1], "r" );
     FILE *file2 = fopen( argv[2], "w" );
     if ( file1 ) {
       while (( c = fgetc( file1 )) != EOF ) {
	  fputc( c, file2 );
	} fclose( file1 );
      	fclose( file2 );
     } return 0;
  } else {
    perror( "cp" );
  } return 0;
}
