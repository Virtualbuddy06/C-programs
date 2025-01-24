//INPUT N RANDOM NUMBERS BETWEEN 0 AND 100(USING RANDOM FUNCTIONS) AND THEN FIND THEIR SUMS AND AVERAGE
#include <stdio.h>
int main()
{
	int n,i,sum=0,average;
	printf("Enter n of the array\n");
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        arr[i]=rand()%100;
    }
    for(i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    average=(int)sum/n;
    printf("The sum of the number of array is:- %d\n",sum);
    printf("The average of the number of array is:- %d",average);
    return 0;
}
    
