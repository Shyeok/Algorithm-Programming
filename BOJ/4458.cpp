#include<stdio.h>
#include<string.h>
char s[100000][31];
int len[100000];
int main()
{
	int n;
	int i, j;
	scanf("%d",&n);
	getchar();
	for(i = 0; i < n; i++)
	{
		gets(s[i]);
		len[i] = strlen(s[i]);
	}
	for(i = 0; i < n; i++)
	{
		if(s[i][0] <= 'z' && s[i][0] >= 'a')
		{
			printf("%c",s[i][0] + 'A' - 'a');
		}
		else printf("%c",s[i][0]);
		for(j = 1; j < len[i]; j++)
		{
			printf("%c",s[i][j]);
		}
		printf("\n");
	}
	return 0;
}