// write a progra, to read a number from keyboard until a zero or a negative umber is keyed in. finally sm and average of entered numbers.

# include<stdio.h>
int main()
{
    int num,count=0;
    float sum=0,avg;
    do{
        printf("\n Enter number \t");
        scanf("%d",&num);
        sum+=num;
        count++;
    } 
    while(num>0);
    sum=sum-num;
    avg=(sum)/(count-1);
    // here the last number either 0 or negative number is not included inn averege thus the final numbe enterd is excluded form the sum and hence sum -num & sount-1
    printf("\n The sum is : \t %d",sum);
    printf("\n The averege is:\t%f",avg);
    return 0;
}