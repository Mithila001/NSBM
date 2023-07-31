#include <stdio.h>
#include <stdlib.h>
// Name: Mithila Dissanayaka
// ID:   30271
// Practical-5 Section-A Q15
int main()
{
    int num[9],i,even=0;

    for(i=0;i<=9;i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(num[i]%2==0)
            even++;
    }

    printf("Total even number count is: %d",even);
}
