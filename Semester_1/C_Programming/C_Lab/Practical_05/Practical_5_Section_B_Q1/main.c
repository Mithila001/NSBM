#include <stdio.h>
#include <stdlib.h>
// Name: Mithila Dissanayaka
// ID:   30271
// Practical-5 Section-B Q1
int main()
{
    int num[4],i,count=0;

    for(i=0;i<=4;i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&num[i]);
    }

    for(i=0;i<=4;i++)
    {
        if(num[i]>0)
            count++;
    }
    printf("Positive count is: %d \n",count);

    count =0;
    for(i=0;i<=4;i++)
    {
        if(num[i]<0)
            count++;
    }
    printf("Negative count is: %d \n",count);

    count =0;
    for(i=0;i<=4;i++)
    {
        if(num[i]==0)
            count++;
    }
    printf("0 count is: %d \n",count);


}
