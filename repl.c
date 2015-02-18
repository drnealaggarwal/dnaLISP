/* a start at developing a REPL
in class we'll discuss what a REPL is and how we'd go ahead
and create one. In the meantime do a Google search to learn 
about REPLs, fputs, fgets and printf. Also read about while
loops in C. Another useful exercise is to search for stdio.h
and study what that file is about. Read, read, read. I'll keep
on putting notes like this in the comments on these source files.
If you are dilligent in educating yourself you'll learn a helluva
lot and grok this C and LISP and how computers are programmed in
no time at all.

Here is the code. Don't copy and paste. Type
it all in yourself -- that's the only way to really learn 

compiled with gcc -std=c99 -Wall repl.c -o dnaLISP
leaving file dnaLISP in directory. Execute this file with
./dnaLISP to get a neat REPL that should get your juices running.
A REAL REPL - well not really but a good start and you can get a 
sense of where we are headed.
*/

#include <stdio.h>

/* Declare a static buffer for user input of max size 2048 characters */
static char input[2048];

int main(int argc, char** argv){

  /* Print version and Exit information */
  puts("dnaLISP Version 0.0.1");
  puts("Press Ctrl+c to Exit\n");

  /* Infinite loop */
  while(1){
    fputs("dnaLISP> ", stdout);
    
    /* Read a line of user input */
    fgets(input, 2048, stdin);

    /* Echo input back to user */
    printf("Just a dumb echo back. You typed: %s", input);
  }

  return 0;
}
