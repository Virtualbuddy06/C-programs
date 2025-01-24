//INPUT THE N NUMBERS OF ELEMENTS IN THE ARRAY AND STORE THE EVEN NUMBERS IN THE ARRAY even[] AND ODD NUMBERS IN ARRAY odd[]
#include <stdio.h>
int main()
{
    int n, i,j=0,k=0;
    printf("Enter size of the array :\n ");
    scanf("%d", &n);
    int arr[n],even[n],odd[n];
    printf("Enter elements in the array: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
	{
		if(arr[i]%2==0)
		{
			even[j]=arr[i];
			++j;
		}
		else
		{
			odd[k]=arr[i];
			++k;
		}
	}
	printf("Even numbers\n");
	for(i=0; i<j; i++)
    {
        printf("%d\n", even[i]);
    }
    printf("Odd numbers\n");
    for(i=0; i<k; i++)
    {
        printf("%d\n", odd[i]);
    }
	printf("Number of even numbers :- %d\n",j);
	printf("Number of odd numbers :- %d",k);
	return 0;
}


