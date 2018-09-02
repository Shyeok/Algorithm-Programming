#include<stdio.h>
int n, m, dap;
char field[20][20];
int check[26];
int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
void finddap(int x, int y, int len);
int main()
{
	int i, j;
	scanf("%d%d",&n,&m);
	for(i = 0; i < n; i++)
	{
		getchar();
		for(j = 0; j < m; j++)
		{
			scanf("%c",&field[i][j]);
		}
	}
	check[field[0][0] - 'A'] = 1;
	finddap(0,0,1);
	printf("%d\n",dap);
	return 0;
}
void finddap(int x, int y, int len)
{
	int i;
	int cx, cy;
	if(len > dap)dap = len;
	for(i = 0; i < 4; i++)
	{
		cx = x + dir[i][0];
		cy = y + dir[i][1];
		if(cx >= 0 && cx < n && cy >= 0 && cy < m)
		{
			if(check[field[cx][cy] - 'A'] == 0)
			{
				check[field[cx][cy] - 'A'] = 1;
				finddap(cx,cy,len + 1);
				check[field[cx][cy] - 'A'] = 0;
			}
		}
	}
}