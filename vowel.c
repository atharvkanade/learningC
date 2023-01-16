
#include <stdio.h>

int isVowel(char ch)
{
	int check = 0;
	switch (ch)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		check = 1;
	}
	return check;
}

int main()
{
	char ch;
	printf("Enter a character :");
	scanf("%c", &ch);

	if (ch == 1)
	{
		printf("The character is vowel.");
	}
	else
	{
		printf("Chracter is a consonant.");
	}

	return 0;
}
