#include <stdio.h>
#include <stdlib.h>
// Name: Mithila Dissanayaka
// ID:   30271
// Practical-5  Section-A Q13
int main()
{
    int num,total=0,count;

    for(count=1;num!= -1 ; count++)
    {
        total += num;
        printf("Enter a number: ");
        scanf("%d",&num);

    }

    printf("Total is: %d",total);
}
