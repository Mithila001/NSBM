#include <stdio.h>
#include <stdlib.h>
// Name: Mithila Dissanayaka
// ID:   30271
// Practical-5 Section-A Q6

int main()
{
    int base,expo,total=1,count=0;

    printf("Enter the base:");
    scanf("%d",&base);
    printf("Enter the exponent:");
    scanf("%d",&expo);

    count = expo;

    while(expo!=0)
    {
     total = total*base;
     expo--;
    }

    printf("The power %d of %d is: %d",count,base,total);
}
