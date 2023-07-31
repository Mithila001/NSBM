#include <stdio.h>
#include <stdlib.h>
// Name: Mithila Dissanayaka
// ID:   30271
// Practical-5 Section-A Q4

int main()
{
    int sum=0,rem,num;

    printf("Enter a number: ");
    scanf("%d",&num);

    while(num!=0)
    {
        rem = num%10;
        sum += rem;
        num /= 10;
    }

    printf("Answer is %d",sum);
}
