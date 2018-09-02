#include<stdio.h>
#include<string.h>
int n, start[20000], end[20000];
char s[20000][205];
int main()
{
	int i, j, cnt;
	scanf("%d",&n);
	getchar();
	for(i = 0; i < n; i++)
	{
		gets(s[i]);
		end[i] = strlen(s[i]);
	}
	for(i = 0;i < n; i++)
	{
		cnt = 0;
		for(j = 0; j < end[i]; j++)
		{
			if(s[i][j] == ' ')cnt = cnt + 1;
			if(cnt == 2)
			{
				start[i] = j + 1;
				break;
			}
		}
	}
	for(i = 0; i < n; i++)
	{
		s[i][end[i]] = ' ';
		for(j = 0; j <  start[i]; j++)
		{
			s[i][end[i] + j + 1] = s[i][j];
		}
		end[i] = end[i] + start[i] - 1;
	}
	for(i = 0; i < n; i++)
	{
		for(j = start[i]; j <= end[i]; j++)
		{
			printf("%c",s[i][j]);
		}
		printf("\n");
	}
	return 0;
}
