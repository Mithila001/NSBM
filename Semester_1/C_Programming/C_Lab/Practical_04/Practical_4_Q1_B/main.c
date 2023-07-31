#include <stdio.h>
#include <stdlib.h>
// Name: Mithila Dissanyaka
// ID  : 30271
// Practical 04 Q1_B
int main()
{
    int num,res;
    printf("Enter a number: ");
    scanf("%d",&num);

    res = num%2;

    switch(res)
    {
        case 1:printf("The %d is an odd number.",num);break;
        default:printf("The %d is an even number.",num);
    }
}
