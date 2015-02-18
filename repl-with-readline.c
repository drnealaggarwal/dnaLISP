/* A REPLY with readline capability
Remember what happened in class when you tried the arrow
keys in your REPL? Let's fix that.

compile with: gcc -std=c99 -Wall repl-with-readline.c -ledit -o dnaLISP2
once again we'll discuss this further in class.
Google is your friend. Read up on readline and the -ledit I've used
to compile this program.

A question for you: I've removed the declaration of the static buffer
to hold what the user inputs and yet this still works. How?

*/

#include <stdio.h>
#include <stdlib.h>
#include <editline/readline.h>

int main(int argc, char** argv){

  /* Print version and Exit information */
  puts("dnaLISP Version 0.0.1");
  puts("Press Ctrl+c to Exit\n");

  /* Infinite loop */
  while(1){
    
    /* prompt user and get input */
    char* input = readline("dnaLISP> ");

    /* Add input to history */
    add_history(input);

    /* Echo input back to user */
    printf("Slightly better dumb echo back. You typed: %s", input);

    /* Free retrieved input */
    free(input);

  }

  return 0;
}
