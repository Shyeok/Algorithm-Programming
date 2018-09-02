#include <stdio.h>
int n, dap[1001];
int ma[1011][1011];
int main()
{
	int i, j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&ma[i][j]);
		}
	}
	for(i=1;i<=n-2;i++)
	{
		dap[i] = ma[i][i+1] + ma[i][i+2];
		dap[i] = dap[i] - ma[i+1][i+2];
		dap[i] = dap[i] / 2;
	}
	dap[n-1] = ma[n-1][n-2] - dap[n-2];
	dap[n] = ma[n][n-2] - dap[n-2];
	if(n == 2)
	{
		dap[1] = 1; dap[2] = 1;
	}
	for(i=1;i<=n;i++)
	{
		printf("%d ",dap[i]);
	}
	return 0;
}