#include <stdio.h>
#include <stdlib.h>
// Name: Mithila Dissanayaka
// ID:   30271
// Practical-5 Section-A Q7
int main()
{
    int fnum=0,snum=1,count=0,total=0;

    //printf("%d ",fnum);
    //printf("%d ",snum);
    //printf("0 , 1 , ");

    while(count<=10)
    {
        printf("%d ",fnum);
        total = fnum + snum;
        fnum = snum;
        snum = total;

        count++;
    }
}
