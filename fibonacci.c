//0 1 1 2 3 5
#include <stdio.h>
int main()
{
    int n, i,t1=0,t2=1,t3=0;
    printf("Enter the range of the fibonacci series : ");
    scanf("%d",&n);
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    for(i=2;i<n;++i)
    {
    	t3=t1+t2;
    	arr[i]=t3;
    	t1=t2;
    	t2=t3;
    	t3=0;
	}
	printf("The fibonacci series is :\n");
	for(i=0;i<n;i++){
	printf(" %d",arr[i]);
}
return 0;
}
