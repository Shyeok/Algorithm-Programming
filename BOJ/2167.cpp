#include<stdio.h>
int n, m, k;
int table[500][500];
int sum[500][500], dap[20000];
int main()
{
	int i, j;
	int startx, starty, endx, endy;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j = 0 ; j < m; j++)
		{
			scanf("%d",&table[i][j]);
		}
	}
	for(i=n-1;i>=0;i--)
	{
		for(j=m-1;j>=0;j--)
		{
			sum[i][j] = sum[i + 1][j] + sum[i][j + 1] + table[i][j] - sum[i+1][j+1];
		}
	}
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d %d %d %d",&startx,&starty,&endx,&endy);
		dap[i] = sum[startx - 1][starty - 1] - sum[endx][starty - 1] - sum[startx - 1][endy] + sum[endx][endy];
	}
	for(i=0;i<k;i++)
	{
		printf("%d\n",dap[i]);
	}
	return 0;
}