#include<stdio.h>
int main()
{
	int i, j;
	int n, m, cnt = 0;
	int coor[3000][2], inc;
	int a[3000][2], head, tail;
	char map[50][50];
	int check[50][50];
	scanf("%d%d",&n,&m);
	for(i = 0; i < n; i++)
	{
		getchar();
		for(j = 0; j < m; j++)
		{
			scanf("%c",&map[i][j]);
			check[i][j] = 0;
			if(map[i][j] == 'L')
			{
				cnt = cnt + 1;
				coor[cnt][0] = i;
				coor[cnt][1] = j;
			}
		}
	}
	int x, y;
	int d, dap = 0;
	for(i = 1; i <= cnt; i++)
	{
		head = 0; tail = 0; d = 0;
		a[head][0] = coor[i][0]; a[head][1] = coor[i][1];
		check[a[head][0]][a[head][1]] = i;
		for(;;)
		{
			inc = tail;
			d = d + 1;
			for(j = head; j <= tail; j++)
			{
				x = a[j][0]; y = a[j][1];
				if(x > 0 && map[x - 1][y] == 'L' && check[x - 1][y] != i)
				{
					inc = inc + 1;
					a[inc][0] = x - 1; a[inc][1] = y;
					check[x - 1][y] = i;
				}
				if(y > 0 && map[x][y - 1] == 'L' && check[x][y - 1] != i)
				{
					inc = inc + 1;
					a[inc][0] = x; a[inc][1] = y - 1;
					check[x ][y - 1] = i;
				}
				if(x < n - 1 && map[x + 1][y] == 'L' && check[x + 1][y] != i)
				{
					inc = inc + 1;
					a[inc][0] = x + 1; a[inc][1] = y;
					check[x + 1][y] = i;
				}
				if(y < m - 1 && map[x][y + 1] == 'L' && check[x][y + 1] != i)
				{
					inc = inc + 1;
					a[inc][0] = x; a[inc][1] = y + 1;
					check[x][y + 1] = i;
				}		
			}
			if(inc == tail)break;
			head = tail + 1;
			tail = inc;
		}
		if(d > dap)
		{
			dap = d;
		}
	}
	dap = dap - 1;
	printf("%d\n",dap);
	return 0;
}