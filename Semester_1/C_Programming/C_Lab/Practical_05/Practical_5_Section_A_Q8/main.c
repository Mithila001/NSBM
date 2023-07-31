#include <stdio.h>
#include <stdlib.h>
// Name: Mithila Dissanayaka
// ID:   30271
// Practical-5  Section-A Q8
int main()
{
    int count=0,num,tot,multi,rem,numcopy;
    //float rem;
    printf("Enter a number: ");
    scanf("%d",&num);

    numcopy = num;

    while(num!=0)
    {
      num = num/10;
      count++;
    }

    multi = count;
    num = numcopy;
    tot = 0;

    while(count!= 0)
    {
     rem = num%10;
     tot = tot + pow(rem,multi);
     num = num/10;
     count--;
    }

    if(tot == numcopy)
        printf("  \n%d is an Armstrong number\n",numcopy);
    else
        printf("  \n%d is not an Armstrong number\n",numcopy);

}
