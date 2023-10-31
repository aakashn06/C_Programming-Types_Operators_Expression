#include <stdio.h>

int asciiToInt(char s[]);

void main()
{
	char s[10];
	int num;

	printf("Enter the string\n");
	gets(s);
	num = asciiToInt(s);
	printf("Integer value : %d\n", num);
}

int asciiToInt(char str[])
{
	int i, n;

	n = 0;
	for (i = 0; str[i] >= '0' && str[i] <= '9'; ++i)
		n = 10 * n + (str[i] - '0');
	return n;
}