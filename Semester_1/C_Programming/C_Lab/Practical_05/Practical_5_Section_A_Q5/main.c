#include <stdio.h>
#include <stdlib.h>
// Name: Mithila Dissanayaka
// ID:   30271
// Practical-5 Section-A Q5

int main()
{
    int count =10,num,value;

    printf("Enter a number: ");
    scanf("%d",&num);

    do
    {
        value = num%count;
        printf("%d",value);

        num = num/10;
    }while(num != 0);
}
