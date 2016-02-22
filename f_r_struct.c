#include <stdio.h>
#include <string.h>

struct details {
        int money;
        char name[7];
} Nikos,Kostas;

struct details function(struct details name)
{
        struct details jo;
        strcpy(jo.name,name.name);
        jo.money = name.money +100 ;

        return (jo);

}

int main(int argc,char *argv[])
{
        Nikos.money = 300;
        strcpy(Nikos.name,"Nikos");

        printf("%d nikos's money\n%s :name.\n",Nikos.money,Nikos.name);

        Kostas = function(Nikos);

        printf("After calling function\n");
        printf("%d =kostas.money,%s = kostas.name\n",Kostas.money,Kostas.name);

        return (0);
}
