#include<stdio.h>
int field[5][5];
int dap = 0;	
int n;
void findway(int x, int y, int len)
{
	if(x == 4 && y == 4)
	{
		if(len == (5 * 5) - n && len % 2 == 1)
		{
			dap = dap + 1;
		}
	}
	else
	{
		if(x - 1 >= 0 && field[x - 1][y] != 1)
		{
			field[x - 1][y] = 1;
			findway(x - 1,y,len + 1);
			field[x - 1][y] = 0;
		}
		if(y - 1 >= 0 && field[x][y - 1] != 1)
		{
			field[x][y - 1] = 1;
			findway(x,y - 1,len + 1);
			field[x][y - 1] = 0;
		}
		if(x + 1 <= 4 && field[x + 1][y] != 1)
		{
			field[x + 1][y] = 1;
			findway(x + 1,y,len + 1);
			field[x + 1][y] = 0;
		}
		if(y + 1 <= 4 && field[x][y + 1] != 1)
		{
			field[x][y + 1] = 1;
			findway(x,y + 1,len + 1);
			field[x][y  + 1] = 0;
		}
	}
}
int main()
{
	int i, j;
	int x, y;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d%d",&x,&y);
		field[x - 1][y - 1] = 1;
	}
	field[0][0] = 1;
	findway(0,0,1);
	printf("%d\n",dap);
	return 0;
}