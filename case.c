#include <stdio.h>
int main() {
	char str[100],ch;
	printf("Enter the string");
	fgets(str,sizeof(str),stdin);
	int ln = strlen(str);
	int i;
	for (i = 0; i < ln; i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}
	puts(str);
	return 0;
}
