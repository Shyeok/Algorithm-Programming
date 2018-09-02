#include<stdio.h>
#include<string.h>
int main()
{
	int i, len;
	char s[101];
	scanf("%s",&s);
	len = strlen(s);
	for(i = 0; i < len; i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
		else
		{
			s[i] = s[i] - 'A' + 'a';
		}
	}
	for(i = 0; i < len; i++)
	{
		printf("%c",s[i]);
	}
	printf("\n");
	return 0;
}