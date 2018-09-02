#include<stdio.h>
int table[1005][1005];
int n, m, dapx, dapy;
int main()
{
	int i, j, put;
	int x, y, help;
	scanf("%d %d",&n,&m);
	help = n; 
	put = n * n;
	for(i=1;i<=(n+1)/2;i++)
	{
		x = i; y = i;
		for(j = 1; j <= help; j++)
		{
			table[x][y] = put;
			if(put == m){dapx = x; dapy = y;}
			x = x + 1; 
			put = put - 1;
		}
		x = x - 1;
		for(j = 1; j < help; j++)
		{
			y = y + 1;
			table[x][y] = put;
			if(put == m){dapx = x; dapy = y;}
			put = put - 1;
		}
		x = x - 1;
		for(j = 1; j < help; j++)
		{
			table[x][y] = put;
			if(put == m){dapx = x; dapy = y;}
			x = x - 1;
			put = put - 1;
		}
		x = x + 1;
		y = y - 1;
		for(j = 1; j < help - 1; j++)
		{
			table[x][y] = put;
			if(put == m){dapx = x; dapy = y;}
			y = y - 1;
			put = put - 1;
		}
		help = help - 2;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",table[i][j]);
		}
		printf("\n");
	}
	printf("%d %d\n",dapx,dapy);
	return 0;
}