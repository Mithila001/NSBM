#include <stdio.h>
#include <stdlib.h>
// Name: Mithila Dissanayaka
// ID:   30271
// Practical-5 Section-A Q3

int main()
{
   int count,num,total =1;

   printf("Enter a number :");
   scanf("%d",&num);

   while(num!= 0)
   {
       total = total*num;
       num--;
   }
   printf("%d",total);

}
