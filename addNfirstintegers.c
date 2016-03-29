// A program to add the first N integers and print out the sum.
#include <stdio.h>
#define N 100

int main(void)
{
        int i,sum,cnt;
        sum = cnt = 0;
        for(i = 1; i <= N; i++,++cnt)
                sum +=i;
        printf("Added the first %d numbers.Sum of them is %d",cnt,sum);
        return (0);
}
