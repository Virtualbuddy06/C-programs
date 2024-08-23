// Leap Year Program without else if
//Logic
//If the year is divisible by 4 it's a leap year.
//If the year is also 100 it's should be divisible by 400
#include <stdio.h>
int main() {
    int leap,d=0;
    printf("Enter the Year\n");
    scanf("%d",&leap);
    if((leap%4==0)&&(leap%100!=0))
    {
        printf("%d is a leap year",leap);
    }
    if((leap%4==0)&&(leap%100==0)&&(leap%400==0))
    {
        printf("%d is a leap year\n",leap);
    }
    if(leap%4!=0)
    {
        printf("%d is not a leap year\n",leap);
    }
    return 0;
}
