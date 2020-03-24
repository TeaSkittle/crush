// print out time and date
// Author: Travis Dowd
// Date: 3-23-2020

#include  <stdio.h>
#include <time.h>

int main( int argc, char *argv[]) {
  time_t t;
  time( &t );
  printf( "%s", ctime( &t ));
  return 0;
}
