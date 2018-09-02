#include<stdio.h>
int n;
char str[10];
char strings[1001][10];
int dapstr[1001];
int main()
{
	int i, j;
	int dap = 0;
	for(i = 0; i < 9; i++)
	{
		scanf("%c",&str[i]);
	}
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		getchar();
		for(j = 0; j < 9; j++)
		{
			scanf("%c",&strings[i][j]);
		}
	}
	for(i = 0; i < n; i ++)
	{
		for(j = 0; j < 9; j++)
		{
			if(str[j] != '*')
			{
				if(str[j] != strings[i][j])
				{
					break;
				}
			}
		}
		if(j == 9)
		{
			dap = dap + 1;
			dapstr[dap] = i;
		}
	}
	printf("%d\n",dap);
	for(i = 1; i <= dap; i++)
	{
		for(j = 0; j < 9; j++)
		{
			printf("%c",strings[dapstr[i]][j]);
		}
		printf("\n");
	}
	return 0;
}