#include<stdio.h>
int n;
int table[501][501];
int help[501][501];
int max(int a, int b)
{
	if(a>b)return a;
	else return b;
}
int main()
{
	int i, j;
	int dap;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			scanf("%d",&table[i][j]);
		}
	}
	help[1][1] = table[1][1];
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			help[i][j] = max(help[i-1][j],help[i-1][j-1]) + table[i][j];
		}
	}
	dap = 0;
	for(i=1;i<=n;i++)
	{
		dap = max(dap,help[n][i]);
	}
	printf("%d",dap);
	return 0;
}