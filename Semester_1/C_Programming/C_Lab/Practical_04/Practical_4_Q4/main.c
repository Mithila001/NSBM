#include <stdio.h>
#include <stdlib.h>
// Name: Mithila Dissanyaka
// ID  : 30271
// Practical-04 Question-04

int main()
{
    char let;

    printf("Enter a letter: ");
    scanf("%C",&let);

    switch(let)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("%c is a vowel",let);
        break;
        default:
        printf("%c is not a vowel",let);


    }
}
