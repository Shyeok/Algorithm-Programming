#include <stdio.h>
int n, m, dap[6];
char window[600][600];
int main()
{
	int i, j, k;
	int cnt;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n*5+1;i++)
	{
		scanf("%s",&window[i][1]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cnt = 0;
			for(k=1;k<=4;k++)
			{
				if(window[(i-1)*5+1+k][(j-1)*5+2] == '*')
				{
					cnt = cnt + 1;
				}
			}
			dap[cnt] = dap[cnt] + 1;
		}
	}
	for(i=0;i<=4;i++)
	{
		printf("%d ",dap[i]);
	}
	return 0;
}