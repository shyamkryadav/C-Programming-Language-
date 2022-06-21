// write a program to calculate factorial of a number
# include<stdio.h>
int main()
{
    int num,i;
    long fact=1;
    printf("\n Enter the number whose factorial is to be calculated");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        fact*=i;
    printf("\n The factorial is %ld",fact);
    return 0;
}