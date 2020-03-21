// copy argv[1] to argv[2]
// Author: Travis Dowd
// Date: 3-18-2020

#include <stdio.h>

int main( int argc, char *argv[] ) {
  if ( argc == 3 ) {
     static char ch;
     FILE *file1 = fopen ( argv[1], "r" );
     FILE *file2 = fopen ( argv[2], "w" );
     if ( file1 ) {
       while (( ch = fgetc( file1 )) != EOF ) {
	  fputc( ch, file2 ); }
      fclose(file1);
      fclose(file2);
     } return 0;
  } else {
    printf( "Not enough arguments.\n" );
  } return 0;
}
