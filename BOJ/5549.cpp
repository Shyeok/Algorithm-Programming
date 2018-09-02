#include<stdio.h>
int n, m, t;
char map[1005][1005];
int inf_map[1005][1005][4], dap[100003][4];
int main()
{
	int i, j, k;
	int startx, starty, endx, endy;
	scanf("%d %d",&n,&m);
	scanf("%d",&t);
	getchar();
	for(i = 0; i < n; i++)
	{
		scanf("%s",&map[i]);
	}
	for(i = n - 1; i >= 0; i--)
	{
		for(j = m - 1; j >= 0; j--)
		{
			for(k = 0; k < 3; k++)
			{
				inf_map[i][j][k] = inf_map[i + 1][j][k] + inf_map[i][j + 1][k] - inf_map[i + 1][j + 1][k]; 
			}
			if(map[i][j] == 'J')inf_map[i][j][0]++;
			if(map[i][j] == 'O')inf_map[i][j][1]++;
			if(map[i][j] == 'I')inf_map[i][j][2]++;
		}
	}
	for(i = 0; i < t; i++)
	{
		scanf("%d %d %d %d",&startx,&starty,&endx,&endy);
		for(j = 0; j < 3; j++)
		{
			dap[i][j] = inf_map[startx - 1][starty - 1][j] - inf_map[endx][starty - 1][j] - inf_map[startx - 1][endy][j] + inf_map[endx][endy][j];
		}
	}
	for(i = 0; i < t; i++)
	{
		for(j = 0; j < 3; j++)printf("%d ",dap[i][j]);
		printf("\n");
	}
	return 0;
}