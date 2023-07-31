#include <stdio.h>
#include <stdlib.h>
// Name: Mithila Dissanayaka
// ID:   30271
// Practical-5 Section-A Q-11
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if((num%num==0)&&(num%1==0))
        printf("Prime number");
    else
        printf("Not a prime number");
}
