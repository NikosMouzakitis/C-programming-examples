#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main(void)
{
        int fd ;
        char buffer [30];


        /* create and write */

        fd = open("data",O_CREAT | O_WRONLY,0600);
        if(fd == -1)
        {       printf("failed to create and open the file.\n");
        exit(1);
        }

        write(fd,"Hello myfile.Created Febreary\n",30);

        close(fd);




        /*  read  */


        fd = open("data",O_RDONLY);

        if(fd == -1)
        {
                printf("Failed to open and read the file\n");
                exit(1);
        }

        read(fd,buffer,30);
        printf("Data leaked : %s\n",buffer);

        close(fd);


        return (0);
}
