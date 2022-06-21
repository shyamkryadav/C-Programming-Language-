// write a program to input an amount if the amount is >5000, give 5% disocunt if the amount is 5000<  amount >200.give 2% discount,otherwise 1% discount.

#include <stdio.h>
int main()
{
    int amount;
    printf("Enter the amount");
    scanf("%d", &amount);
    if (amount > 5000)
    {
        printf("You got 5per discoutn");
    }
    else
    {
        if (amount > 5000 || amount < 2000)
        {
            printf("You got 2per discoutn");
        }
        else
        {
            printf("you got 1per discount");
        }
    }

    return 0;
}