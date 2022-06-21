// write a program to read a number form user and determine wheather the number is even or odd
#include <conio.h>
#include <stdio.h>
int main()
{
    int num, remainder;
    printf("Enter a nuber :");
    scanf("%d", &num);
    remainder = num % 2; // module division
    if (remainder == 0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }

    return 0;
}