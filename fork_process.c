#include<stdio.h>

int main()
{
    int b,c;

    b=fork();

    if(b==0)
    {
        printf("b pid is : %d  ppid is: %d\n",getpid(),getppid());
    }
    else
    {
        
        printf("a pid is : %d  ppid is: %d\n",getpid(),getppid());

        c=fork();
        if(c==0)
        {
            printf("c pid is : %d  ppid is: %d\n",getpid(),getppid());
        }
    }
    
    return 0;
}