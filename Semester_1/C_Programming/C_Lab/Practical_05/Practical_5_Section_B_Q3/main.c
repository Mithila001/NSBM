#include <stdio.h>
#include <stdlib.h>
// Name: Mithila Dissanayaka
// ID:   30271
// Practical-5 Section-B Q3
int main()
{
    int i,ave=0,count_g=0,price[9],total=0;

    for(i=0;i<10;i++)
    {
        printf("Enter %d item's price: ",i+1);
        scanf("%d",&price[i]);

        if(price[i]>200)
            count_g++;

        total += price[i];
    }
    ave = total/10;

    printf("Average value of an item: %d \n",ave);
    printf("Number of item witch is grater than 200: %d \n",count_g);

}
