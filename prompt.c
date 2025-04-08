/*
GOAL: write an interactive prompt

*/
#include <stdio.h>

int main(int argc, char** argv){
    /* buffer to hold user input */
    static char input[2048];


    puts("Welcome to skyler");

    /* Infinite loop*/
    while (1){
        
        /* output our stream */
        fputs("skyler=>", stdout);

        /*  read line of user input*/
        fgets(input, 2048, stdin);

        printf("No you're a %s", input);

    }

    return 0;
}