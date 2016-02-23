#include <stdio.h>
#include <stdlib.h>

int SIZE;
int *array ;
int n_max = 0;
void insert(){

        int iv;
        if(n_max == SIZE )
                printf("Impossible to add more elements.\n");
        else
        {
                printf("Which integer to insert?\n");
                scanf("%d",&iv);
                array[n_max] = iv;
                n_max++;
        }

}

//void delete() {
//}

void print() {
        int i;
        printf("Elements now are : ");
        for( i = 0; i < n_max ; i++)
                printf("%d ",array[i]);
        printf("\n");

}


int main(int argc,char *argv[])
{

        int choice = 0;

        printf("Enter the size of the array you want to create.\n");
        scanf("%d",&SIZE);
        // malloc *creating an array or SIZE size.
        array = (int *)malloc(sizeof(int) * SIZE);

        //printf("size = %d\n",SIZE);


        while(choice != 4)
        {
                printf("1.Insert\n2.delete\n3.print\n4.exit\n");
                scanf("%d",&choice);

                switch (choice) {
                        case 1 :
                                insert();
                                break;
                //      case 2 :
                //              delete();
                                break;
                        case 3 :
                                print();
                                break;
                        case 4 :
                                exit(0);
                        default :
                                break;
                }
        }


        return (0);

}
