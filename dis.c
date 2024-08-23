#include <stdio.h>

int main() {
    float amount,dis;
    printf("Enter the price of the product\n");
    scanf("%f",&amount);
    if(amount>=4999)
    {
        dis=amount*0;
    }
    if((amount>=5000)&&(amount<=9999))
    {
    dis=amount*0.05;
    }
    if((amount>=10000)&&(amount<=19999))
    {
    dis=amount*0.10;
    }
    if(amount>20000)
    {
    dis=amount*0.15;
    }
    amount=amount-dis;
    printf("Final discounted price is%f",amount);
    return 0;
}