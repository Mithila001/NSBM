#include <stdio.h>
#include <stdlib.h>
// Name: Mithila Dissanayaka
// ID:   30271
// Practical-5 Section-A Q12

int main()
{
    int num,count,fact;

    printf("Enter a number: ");
    scanf("%d",&num);

    for(count=1;count<=num;count++)
    {
      if(num%count==0)
            printf("%d is a factor \n",count);

    }
}
