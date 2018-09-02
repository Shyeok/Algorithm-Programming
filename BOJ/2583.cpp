#include<stdio.h>
#include<algorithm>
using namespace std;
int table[101][101];
int dap[10001], cnt;
int n, m, k;
void check(int x, int y)
{
	table[x][y] = 1;
	dap[cnt] = dap[cnt] + 1;
	if(x > 1 && table[x - 1][y] == 0)check(x - 1,y);
	if(y > 1 && table[x][y - 1] == 0)check(x,y - 1);
	if(x < n && table[x + 1][y] == 0)check(x + 1,y);
	if(y < m && table[x][y + 1] == 0)check(x,y + 1);
}
int main()
{
	int i, j, l;
	int startx, starty, endx, endy;
	scanf("%d%d%d",&n,&m,&k);
	for(i = 0; i < k; i++)
	{
		scanf("%d%d%d%d",&starty,&startx,&endy,&endx);
		for(j = startx + 1; j <= endx; j++)
		{
			for(l = starty + 1; l <= endy; l++)
			{
				table[j][l] = 1;
			}
		}
	}
	cnt = 0;
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= m; j++)
		{
			if(table[i][j] == 0)
			{
				cnt = cnt + 1;
				check(i,j);
			}
		}
	}
	sort(dap + 1, dap + cnt + 1);
	printf("%d\n",cnt);
	for(i = 1; i <= cnt; i++)
	{
		printf("%d ",dap[i]);
	}
	printf("\n");
	return 0;
}