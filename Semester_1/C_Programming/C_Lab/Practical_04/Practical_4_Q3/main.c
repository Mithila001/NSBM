#include <stdio.h>
#include <stdlib.h>
// Name: Mithila Dissanyaka
// ID  : 30271
// Practical-04 Question-03
int main()
{
    int comand;
    float num,answer,ans,rad,phi = 3.14159;

    printf("        Choose the calculation \n");
    printf("        ======================  \n\n\n ");
    printf("What kind of calculation you need?(Type the number)\n  1.The circumference of a circle. \n  2.The area of a circle \n  3.The volume of a sphere \n");
    scanf("%d",&comand);

    printf("Enter the radius of the circle: ");\
    scanf("%f",&rad);


    switch(comand)
    {
        case 1:
             ans = 2*phi*rad;
             printf("The circumference of a circle is: %.2f",ans);break;
        case 2:
            ans = phi*rad*rad;
            printf("The area of a circle is: %.2f",ans);break;
        case 3:
            ans = 1.3333*phi*rad*rad*rad;
            printf("The volume of a sphere is: %.2f",ans);break;
        default:
            printf("Error");


    }

}
