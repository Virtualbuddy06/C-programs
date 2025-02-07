#include<stdio.h>
int main() {
	char a[100];
	printf("Enter the string\n");
	fgets(a,sizeof(a),stdin);
	int ln = strlen(a);
	int i=0,Cvow,Cconst,Cspace,Cspecial;
	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] == ' ' && a[i+1] != ' ')
			++Cspace;
		if (a[i] == 'a'|| a[i] == 'e'||a[i] == 'i'||a[i] == 'o'||a[i] == 'u')
			++Cvow;
		if (a[i] != 'a'|| a[i] != 'e'||a[i] != 'i'||a[i] != 'o'||a[i] != 'u')
			++Cconst;
	}
	printf("Number of space in given string are: %d\n", Cspace);
	printf("Number of Vowel in given string are: %d\n", Cvow);
	printf("Number of consonant in given string are: %d\n", Cconst);
}
