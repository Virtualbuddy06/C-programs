#include <stdio.h>

int main() {
    int marks;
    printf("Enter the marks of the student\n");
    scanf("%d",&marks);
    if(marks>=90)
    {
        printf("Grade A+");
    }
    if((marks>=80)&&(marks<=89))
    {
        printf("Grade A");
    }
    if((marks>=60)&&(marks<=79))
    {
        printf("Grade B");
    }
    if((marks>=40)&&(marks<=59))
    {
        printf("Grade B");
    }
    if(marks<40)
    {
        printf("Fail");
    }

    return 0;
}