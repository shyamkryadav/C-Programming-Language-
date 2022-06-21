// write a program to read percentage of marks obtained by a student in SLC and +2" if both levels have percentage greater than or equal to 60.
#include <stdio.h>
int main()
{
    float SLC_per, plus2_per;
    printf("Enter percentage in +2 in section:");
    scanf("%f", &SLC_per);
    if (SLC_per >= 60)
    {
        printf("Conguratulation!!!!");
        printf("\nYou have first devision in both SLC and +2.");
    }
    return 0;
}