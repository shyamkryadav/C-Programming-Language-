// write a program to read three numbers from user and determine the largest number among them
#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter 3 numbers:");
    scanf("%d%d%d", &n1, &n2, &n3);
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("largest =%d", n1);
        }
        else
        {
            printf("Larget =%d", n3);
        }
        else
        {
            if (n2 > n3)
            {
                printf("largest=%d", n2);
            }
            {
                printf("Largest=%d", n3);
            }
        }
    }

    return 0;
}