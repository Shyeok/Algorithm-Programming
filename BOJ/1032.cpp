#include<stdio.h>
#include<string.h>
int n;
char s[60][60];
int main()
{
	int i, j, len;
	int check;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&s[i]);
	}
	len = strlen(s[0]);
	for(i=0;i<len;i++)
	{
		s[n][i] = s[0][i];
		for(j=0;j<n;j++)
		{
			if(s[n][i] != s[j][i])
			{
				s[n][i] = '?';
				break;
			}
		}
	}
	for(i=0;i<len;i++)
	{
		printf("%c",s[n][i]);
	}
	return 0;
}