#include <stdio.h>
#include <stdlib.h>
// Name: Mithila Dissanayaka
// ID:   30271
// Practical-5 Section-B Q2
int main()
{
    int num[4],i,count=0,max=0,min=2147483647,total=0;
    float ave;

    for(i=0;i<=4;i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&num[i]);
    }

    for(i=0;i<=4;i++)
    {
        if(num[i]>= max)
            max = num[i];
            //printf("The : %d \n",max);
    }
    printf("The maximum number is: %d \n",max);

    for(i=0;i<=4;i++)
    {
        if(num[i]<= min)
            min = num[i];
    }
    printf("The minimum number is: %d \n",min);

     for(i=0;i<=4;i++)
    {
        total += num[i];
    }


     ave = total/5;
     printf("Average is %d ",ave);
}
