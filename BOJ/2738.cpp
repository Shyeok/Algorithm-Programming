#include<stdio.h>
int main()
{
	int n, m;
	int i, j;
	int a[101][101], b[101][101], c[101][101];
	scanf("%d%d",&n,&m);
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)scanf("%d",&a[i][j]);
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)scanf("%d",&b[i][j]);
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			c[i][j] = a[i][j]  + b[i][j];
		}
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}