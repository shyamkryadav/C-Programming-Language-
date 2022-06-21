// write a program that reads total marks of student in seven subject . then calcualte the percentage and determine the division .Use follwing conditions.
// 1.Perecntage greater than or equal to 80 > disction,
// 2.Percentage between 60 to 79  First Devision
// 3. percentage between 45 to 59 second division
// 4. percentage between 32 to 44 > third devision
// 5. Percentae less than or equal to >31  fail

# include<stdio.h>
int main()
{
    float nep,eng,math,phy,chem,bio,comp,percentage;
    printf("Enter the marks of 7 subject:");
    scanf("%f%f%f%f%f%f%f%f",&nep,&eng,&math,&phy,&chem,&bio,&comp,&percentage);
    percentage=(nep+eng+math+phy+chem+bio+comp+percentage)/7;
    if (percentage>=80)
    {
        printf("Disction");
    }
    else if (percentage >=60 && percentage <80)
    {
        printf("First Division");
    }
    else if (percentage>=45 && percentage<60)
    {
        printf("second division");
    }
    else if (percentage>=32 && percentage<45)
    {
        printf("Third division");
    }
    else{
        printf("Fail");
        printf("\n Your Percentage is: %f",percentage);
    }
    
    return 0;
}