#include<stdio.h>
#include<stdlib.h>
#define Max 500
typedef struct _link
{
	int x, y;
	_link *link;
}list;
int n, m;
int maif[Max][Max];
int cnt[Max][Max][2][2];
int des[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
list *head, *tail, *inc;
int main()
{
	int i, j;
	int nx, ny, gx, gy;
	list *newdata, *help;
	scanf("%d%d",&n,&m);
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			scanf("%d",&maif[i][j]);
		}
	}
	newdata = (list*)malloc(sizeof(list));
	newdata->x = 0;
	newdata->y = 0;
	newdata->link = NULL;
	head = newdata;
	tail = head;
	cnt[0][0][1][1] = 1;
	for(;;)
	{
		inc = tail;
		for(;;)
		{
			nx = head->x;
			ny = head->y;
			for(i = 0; i < 4; i++)
			{
				gx = nx + des[i][0];
				gy = ny + des[i][1];
				if(gx >= 0 && gx < n && gy >= 0 && gy < m)
				{
					if(maif[nx][ny]  > maif[gx][gy])
					{
						if(cnt[gx][gy][1][0] == cnt[nx][ny][1][0] + 1)
						{
							cnt[gx][gy][1][1] = cnt[gx][gy][1][1] + cnt[nx][ny][1][1];
						}
						else
						{
							cnt[gx][gy][0][0] = cnt[gx][gy][1][0];
							cnt[gx][gy][0][1] = cnt[gx][gy][0][1] + cnt[gx][gy][1][1];
							cnt[gx][gy][1][0] = cnt[nx][ny][1][0] + 1;
							cnt[gx][gy][1][1] = cnt[nx][ny][1][1];
							newdata = (list*)malloc(sizeof(list));
							newdata->x = gx;
							newdata->y = gy;
							newdata->link = NULL;
							inc->link = newdata;
							inc = newdata;
						}
					}
				}
			}
			if(head == tail)break;
			help = head;
			head = head->link;
			free(help);
		}
		if(inc == tail)break;
		head = tail->link;
		tail = inc;
	}
	printf("%d\n",cnt[n - 1][m - 1][0][1] + cnt[n - 1][m - 1][1][1]);
	return 0;
}