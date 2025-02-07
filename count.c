#include <stdio.h>
int main() {
	char s[100],ch;
	printf("Enter the string");
	fgets(s,sizeof(s),stdin);
	printf("Enter the character to be searched");
	scanf("%c",&ch);
	int i=0,count=0;
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == ch && s[i+1] != ch)
			count++;
	}
	printf("Number of words in given string are: %d\n", count);
	return 0;
}
