#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
/**
 * main - entry point
 * Return:  This function will spawn a child process
            the child process will call an execve on a command
            we need to execve on another process to keep it independent
            the parent process will wait until the child process finish
**/
int main()
{
    char *argv[] = {"/bin/ls", "-l", NULL};
    if (fork() == 0)
    {
        if (execve(argv[0], argv, NULL) == -1)
        {
            perror("Error:");
        }
    }
    wait(NULL);
    printf("execve executed successfuly\n");
    return (0);
}