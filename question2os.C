#include <sys/types.h>
#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
int main()
{    pid_t pid;
	pid = fork();
    if (pid < 0)
    {	fprintf(stderr, "Fork Failed");
        return 1;
    }
    wait (NULL);
    if (pid)
    {    printf("child procces.");
    }
    else{
        printf("parent procces.");
    }
    return 0;
}
