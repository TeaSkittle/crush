// Crush ( C RUdimentary SHell )
// Author: Travis Dowd
// Date: 3-19-2020
//
// Thanks to brennan.io for thier great shell tutorial
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define GREEN "\x1b[32m"
#define WHITE "\x1b[0m"
#define TOK_BUFSIZE 64
#define TOK_DELIM " \t\r\n\a"

char *read_line( void );
char *split_line( char *line );
int launch( char **args );

int main( void ) {
  int running = 1;
  int status;
  char *line;
  char **args;
  while( running ) {
    printf( GREEN "$ " WHITE);
    line = read_line();
    args = split_line( line );
    status = launch( args );
    if ( strcmp( args[0], "exit" ) == 0 ) { running = 0; }
    free( line );
    free( args );
  } return 0;
}

char *read_line( void ) {
  char *line = NULL;
  ssize_t bufsize = 0;
  getline( &line, &bufsize, stdin );
  return line;
}

char *split_line( char *line ) {
  int bufsize = TOK_BUFSIZE, pos = 0;
  char **tokens = malloc( bufsize * sizeof( char* ));
  char *token;
  token = strtok( line, TOK_DELIM );
  while ( token != NULL ) {
    tokens[pos] = token;
    pos++;
    if ( pos >= bufsize ) {
      bufsize += TOK_BUFSIZE;
      tokens = realloc( tokens, bufsize * sizeof( char* ));
    } token = strtok( NULL, TOK_DELIM );
  } tokens[pos] = NULL;
  return tokens;
}

int launch( char **args ) {
  pid_t pid, wpid;
  int status;
  pid = fork();
  if ( pid == 0 ) {
    if ( execvp( args[0], args ) == -1 ) {}
  } else {     
    while ( !WIFEXITED( status ) && !WIFSIGNALED( status )); {
      wpid = waitpid( pid, &status, WUNTRACED ); }
  } return 1;
}

