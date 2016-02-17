#include <stdio.h>
#include <unistd.h>

int G;

void a() //runs on parent process.
{
        printf("parent.G = 10;\n");
        G = 10;
}
void b() // runs on child process.
{
        printf("child.G = 20;\n");
        G = 20;
}
int main()
{
        printf("start\n");

        if (!fork()) {
                b();
                return 0; // child proccess terminates here. returning a zero.
        }
        else
                a();


        printf("G = %d.(always should be 10)\n", G);
        printf("end\n");
        return 0;
}
