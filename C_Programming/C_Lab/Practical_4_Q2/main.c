#include <stdio.h>
#include <stdlib.h>
// Name: Mithila Dissanyaka
// ID  : 30271
// Practical-04 Question-2
int main()
{
    char ope;
    float num1,num2,res;

    printf("Enter a first number:");
    scanf("%f",&num1);
    printf("Enter an operation(+,-,*,/): ");
    scanf(" %c",&ope);
    printf("Enter the second number: ");
    scanf("%f",&num2);

    switch(ope)
    {
        case '+':res = num1+num2;break;
        case '-':res = num1-num2;break;
        case '*':res = num1*num2;break;
        case '/':res = num1/num2;break;
        default:printf("Invalid operation! \n");

    }

    printf("The answer is: %.2f",res);

}
