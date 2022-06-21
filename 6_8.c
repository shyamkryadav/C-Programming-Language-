// write a program that asks an integer numbern and calcualte sum of all natural number from 1 to n.
# include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("\nEnter a number n \t");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        sum+=1;
        printf("\nThe sum is: %d",sum);
    return 0;
}
