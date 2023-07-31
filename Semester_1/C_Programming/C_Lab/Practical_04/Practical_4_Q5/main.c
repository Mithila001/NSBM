#include <stdio.h>
#include <stdlib.h>
// Name: Mithila Dissanyaka
// ID  : 30271
// Practical-04 Question-04
int main()
{
    int month;

    printf("Enter the month number:");
    scanf("%d",&month);

    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("This month have 31 days",month);
        break;
        case 2:
        printf("This month have 28 days",month);
        break;
        default:
        printf("%This month have 30 days",month);
    }
}
