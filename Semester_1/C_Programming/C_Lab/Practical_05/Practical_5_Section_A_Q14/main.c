#include <stdio.h>
#include <stdlib.h>
// Name: Mithila Dissanayaka
// ID:   30271
// Practical-5 Section-A Q14
int main()
{
    int num[9],i,count;

    for(i=0;i<=9;i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0;i<=9;i++)
    {
        printf("Section %d is: %d \n",i+1,num[i]);
    }


}
