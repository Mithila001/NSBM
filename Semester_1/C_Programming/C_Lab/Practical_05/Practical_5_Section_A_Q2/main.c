#include <stdio.h>
#include <stdlib.h>
// Name: Mithila Dissanayaka
// ID:   30271
// Practical-5 Section-A Q-2

int main()
{
    int count=1,mark ,total=0;

    do
    {
        printf("Enter %d mark: ",count);
        scanf("%d",&mark);

        count++;
        total= total+mark;
    }while(count<=4);

    count--;

    printf("Total mark is: %d \n",total);
    printf("The average is: %d \n",total/count);

    if((total/count) < 50)
        printf("You'r Failed \n");
    else
        printf("You'r Passed \n");
}
