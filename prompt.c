#include <stdio.h>
#include <stdlib.h>
#include <histedit.h>
#include <string.h> 
#include <editline/readline.h>


int main(int argc, char** argv) {

    /* Welcome message */
    puts("Welcome to Skyler");
    puts("Press Ctrl+c to Exit\n");

    /* Infinite loop */
    while (1) {

        /* Prompt user */
        char* input = readline("shell@skyler: =>");

        /* Add the input to history */
        add_history(input);

        /* Print the input back to the user */
        printf("No, you're a %s\n", input);

        /* Free memory allocated caused by readline */
        free(input);
    }

    return 0;
}
