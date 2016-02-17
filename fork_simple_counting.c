#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

#define LMT 10
int main(int argc,char *argv[])
{

        int a1 =0,a2 = 0,sum ;
        pid_t childpid ;

        childpid = fork();

        if( childpid < 0)
        {
                printf("Fork failed.\n");
                exit(1);
        }
        else if( childpid == 0)
        {
                while(a1 < LMT)
                        printf("Process %d : %d \n",(int)getpid(),a1++);
                printf("Process %d completed.\n",(int)getpid());
                return(0);
        }

        else if( childpid > 0)
        {
                while(a2 < LMT)
                        printf("Process %d : %d \n",(int)getpid(),a2++);
                printf("Process %d completed.\n",(int)getpid());
                return (0);
        }


        return (0);
}
