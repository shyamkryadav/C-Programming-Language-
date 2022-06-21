// write a program to read a number from user and test wheteher the number is negative [show message "the number id negative " if it is negative number othewise show nothing].
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to be tested:");
    scanf("%d", &num);
    if (num < 0)
        printf("The number is negative");
    return 0;
}