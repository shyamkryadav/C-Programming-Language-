// write a program to calculate factorial of a number using while loop
# include<stdio.h>
int main()
{
    int num,i=1;
    long fact=1;
    printf("Enter a number whose factorial is to be calculated:");
    scanf("%d",&num);
    while(i<=num)
    {
        fact *=i;
        i++;
    }
    printf("The factorial is: %ld", fact);
    
    return 0;
}