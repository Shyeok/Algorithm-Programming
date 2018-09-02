#include<stdio.h>
#include<string.h>
int dy[1000][1000];
int Max(int a, int b)
{
	if(a > b)return a;
	else return b;
}
int main()
{
	int i, j;
	char str1[1000], str2[1000];
	int len1, len2, dap = 0;
	scanf("%s",str1);
	scanf("%s",str2);
	len1 = strlen(str1);
	len2 = strlen(str2);
	for(i = 0; i < len1; i++)
	{
		for(j = 0; j < len2; j++)
		{
			if(str1[i] == str2[j])
			{
				if(i - 1 >= 0 && j - 1 >= 0)dy[i][j] = dy[i - 1][j - 1] + 1;
				else dy[i][j] = 1;
			}
			else
			{
				if(i - 1 >= 0)dy[i][j] = dy[i - 1][j];
				if(j - 1 >= 0)dy[i][j] = Max(dy[i][j],dy[i][j - 1]);
			}
			if(dap < dy[i][j])dap = dy[i][j];
		}
	}
	printf("%d\n",dap);
	return 0;
}