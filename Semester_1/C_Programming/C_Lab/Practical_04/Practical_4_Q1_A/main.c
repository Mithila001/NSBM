#include <stdio.h>
#include <stdlib.h>

// Name: Mithila Dissanyaka
// ID  : 30271
// Practical-04 Q1-A
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if (num%2 == 0)
        printf("The %d is an even number.",num);
    else
        printf("The %d is an odd number.",num);
}
