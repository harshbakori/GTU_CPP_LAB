#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int pid;
    pid=fork();                           //fork() will return twice. (0 to child)and parent id.
    if(pid<0)
        {
            printf(“\n Error “);
            exit(1);
        }
    else if(pid==0)
        {
            printf(“\n Hello I am the child process “);
            printf(“\n My pid is %d and my parent pid is %d“,getpid(),getppid());

            exit(0);
        }
    else
        {
            printf(“\n Hello I am the parent process “);
            printf(“\n My pid is %d and my parent pid is %d\n “,getpid(),getppid());
            exit(1);
        }


return 0;
}
