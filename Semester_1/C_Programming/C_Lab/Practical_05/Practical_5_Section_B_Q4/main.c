#include <stdio.h>
#include <stdlib.h>
// Name: Mithila Dissanayaka
// ID:   30271
// Practical-5 Section-B Q4
int main()
{
    int b_sala,emp_no,i,count=0;

    for(i=0;emp_no!=-999;i++)
    {
        printf("%d.Enter your Employee number: ",i+1);
        scanf("%d",&emp_no);
        printf("%d.Enter your Basic salary: ",i+1);
        scanf("%d",&b_sala);
        printf("\n");

        if(b_sala>=5000)
            count++;
    }
    printf("Number of Employee's basic salary is greater than 5000: %d",count);
}
