#include<stdio.h>
int dir[9][2] = {{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
int main()
{
	int i, j, k, l;
	int n, m, land, dap;
	int field[50][50];
	int head, tail, inc;
	int p[3000][3];
	for(;;)
	{
		scanf("%d%d",&m,&n);
		if(n == 0 && m == 0)break;
		land = 0;
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < m; j++)
			{
				scanf("%d",&field[i][j]);
				if(field[i][j] == 1)land = land + 1;
			}
		}
		dap = 0;
		int x, y;
		int flag = 0;
		for(;;)
		{
			if(land == 0)break;
			dap = dap + 1;
			flag = 0;
			for(i = 0; i< n; i++)
			{
				for(j = 0; j < m; j++)
				{
					if(field[i][j] == 1)
					{
						flag = 1;
						p[0][0] = i; 
						p[0][1] = j;
						field[i][j] = 0;
						land = land - 1;
						head = 0; tail = 0;
						for(;;)
						{
							inc = tail;
							for(k = head; k <= tail; k++)
							{
								for(l = 0; l < 8; l++)
								{
									x = p[k][0] + dir[l][0];
									y = p[k][1] + dir[l][1];
									if(x >= 0 && x < n && y >= 0 && y < m && field[x][y] == 1)
									{
										land = land - 1;
										inc = inc + 1;
										p[inc][0] = x;
										p[inc][1] = y;
										field[x][y] = 0;
									}
								}
							}
							if(inc == tail)break;
							head = tail + 1;
							tail = inc;
						}
					}
					if(flag == 1)break;
				}
				if(flag == 1)break;
			}
		}
		printf("%d\n",dap);
	}
	return 0;
}