#include<stdio.h>
#include<queue>
using namespace std;
int n, m;
int cheese[101][101];
int che[20000][2];
int time;
void outside(int x, int y)
{
	if(x > 1 && cheese[x - 1][y] != time && cheese[x - 1][y] != 1)
	{
		cheese[x - 1][y] = time;
		outside(x - 1,y);
	}
	if(y > 1 && cheese[x][y - 1] != time && cheese[x][y - 1] != 1)
	{
		cheese[x][y - 1] = time;
		outside(x,y - 1);
	}
	if(x < n && cheese[x + 1][y] != time && cheese[x + 1][y] != 1)
	{
		cheese[x + 1][y] = time;
		outside(x + 1,y);
	}
	if(y < m && cheese[x][y + 1] != time && cheese[x][y + 1] != 1)
	{
		cheese[x][y + 1] = time;
		outside(x,y + 1);
	}
}
int main()
{
	int i, j;
	int cnt, cnt_1;
	scanf("%d%d",&n,&m);
	cnt = 0;
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <=m; j++)
		{
			scanf("%d",&cheese[i][j]);
			if(cheese[i][j] == 1)
			{
				cnt = cnt + 1;
				che[cnt][0] = i;
				che[cnt][1] = j;
			}
		}
	}
	time = 1;
	cnt_1 = cnt;
	int x, y;
	int mark;
	for(;;)
	{
		if(cnt == 0)break;
		time = time + 1;
		outside(0,0);
		for(i = 1; i <= cnt_1; i++)
		{
			x = che[i][0]; y = che[i][1];
			mark = 0;
			if(cheese[x][y] == 1)
			{
				if(x > 0 && cheese[x - 1][y] == time)mark = mark + 1;
				if(y > 0 && cheese[x][y - 1] == time)mark = mark + 1;
				if(cheese[x + 1][y] == time)mark = mark + 1;
				if(cheese[x][y + 1] == time)mark = mark + 1;
			}
			if(mark >= 2)
			{
				cheese[x][y] = 0;
				cnt = cnt - 1;
			}
		}
	}
	time = time - 1;
	printf("%d\n",time);
	return 0;
}