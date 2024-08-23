#include <stdio.h>

int main() {
    int leap,c=0;
    printf("Enter the Year\n");
    scanf("%d",&leap);
    if(leap%400==0)
    {
        c=c+1;
    }
    if(leap%4==0)
    {
        if(leap%100==0)
    {
        printf("%d is not leap year\n",leap);
    }
    else
    {
        c=c+1;
    }
    }
    else
    {
        printf("%d is not a leap year\n",leap);
    }
    if(c>=1)
    {
        printf("%d is a leap year\n",leap);
    }
    return 0;
}