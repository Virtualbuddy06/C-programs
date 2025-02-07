#include <stdio.h>
int main() {
	char a[100];
	printf("Enter the string");
	fgets(a,sizeof(a),stdin);
	int i=0,j;
	for(j=0; a[j]!='\0'; ++j);
	j=j-2;
	while(i<j) {
	  if(a[i]!=a[j])
	  break;
	  ++i;
	  --j;
	}
	if(i<j)
	{
		printf("It's not a Palindrome");
	}
	else
	{
		printf("It's a Palindrome");
	}
}
