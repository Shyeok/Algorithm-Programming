#include<stdio.h>
int main()
{
	int i, j, k;
	int testcase;
	int n, m;
	int table[101][101];
	int dap, a, b;
	scanf("%d",&testcase);
	for(i = 0; i < testcase; i++)
	{
		scanf("%d%d",&n,&m);
		for(j = 0; j < n; j++)
		{
			for(k = 0; k < m; k++)
			{
				scanf("%d",&table[j][k]);
			}
		}
		dap = 0;
		for(j = 0; j < m; j++)
		{
			a = 0; b = 0;
			for(k = n - 1; k >= 0; k--)
			{
				if(table[k][j] == 1)
				{
					dap = dap + n - 1 - k - b;
					b = b + 1;
				}
			}
		}
		printf("%d\n",dap);
	}
	return 0;
}