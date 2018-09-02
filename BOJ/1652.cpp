#include<stdio.h>
int main()
{
	int i, j;
	int n;
	int a, b;
	char table[101][101];
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		getchar();
		for(j = 0; j < n ;j++)
		{
			scanf("%c",&table[i][j]);
		}
	}
	int dap;
	dap = 0;
	for(i = 0; i < n; i++)
	{
		a = 0; b = 0;
		for(j = 0; j < n; j++)
		{
			if(table[i][j] =='X')
			{
				a = 0; 
				b = 0;
			}
			else if(table[i][j] == '.')
			{
				b = b + 1;
				if(a == 0 && b >= 2)
				{
					dap = dap + 1;
					a = 1;
				}
			}
		}
	}
	printf("%d ",dap);
	dap = 0;
	for(i = 0; i < n; i++)
	{
			a = 0; b = 0;
		for(j = 0; j < n; j++)
		{
			if(table[j][i] == 'X')
			{
				a = 0; b = 0;
			}
			else if(table[j][i] == '.')
			{
				b = b + 1;
				if(a == 0 && b >= 2)
				{
					dap = dap + 1;
					a = 1;
				}
			}
		}
	}
	printf("%d\n",dap);
	return 0;
}