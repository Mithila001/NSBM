#include <stdio.h>
#include <stdlib.h>
// Name: Mithila Dissanayaka
// ID:   30271
// Practical-5 Section-B Q-5
int main()
{
    int emp_no=0,ot_pay=0,i=1,ot_hour=0;
    float presen,ot_count=0,em_count=0;

    while(emp_no!= -999)
    {
      printf("Enter your employee number: ");
      scanf("%d",&emp_no);
      printf("Enter your total amount of OT houres: ");
      scanf("%d",&ot_hour);
      em_count++;

        if(ot_hour>=40)
            ot_pay = 200*ot_hour;
        else
            ot_pay = 150*ot_hour;

        if(ot_pay>=4000)
            ot_count++;

      printf("Employee Number: %d \n",emp_no);
      printf("OT payment: %d \n\n",ot_pay);

      i++;

    }

    presen = (ot_count/em_count)*100;
    printf("The percentage of employees whose Over Time Payment exceeding the Rs. 4000/-: %.2f",presen);
}
