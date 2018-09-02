#include<stdio.h>
#include<string.h>
char s[100];
int main()
{
	int i;
	int len, height = 10;
	scanf("%s",&s);
	len = strlen(s);
	for(i = 1; i < len; i++)
	{
		if(s[i - 1] != s[i])height = height + 10;
		else height = height + 5;
	}
	printf("%d\n",height);
	return 0;
}