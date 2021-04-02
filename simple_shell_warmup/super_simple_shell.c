#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/** 
 * main - entry point
 * Return:  this function will keep getting input from user
            it can also read a line from a file and quit
**/
int main()
{
    ssize_t get_X;
    int i;
    size_t n = 0;
    char *command;
    get_X = 0;
    /* check if the input is coming from a file */
    if (isatty(STDIN_FILENO))
    {
        printf("$ ");
    }
    while (getline(&lineptr, &n , stdin) != -1)
    {
        printf("%s", lineptr);
        lineptr =   NULL;
        printf("$ ");
    }
    free(lineptr);
}