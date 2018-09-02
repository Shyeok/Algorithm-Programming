#include<cstdio>
int table[51][51];
int dap[10000];
void check(int x, int y)
{
	if(x > 0 && table[x - 1][y] == 1)
	{
		table[x - 1][y] = 0;
		check(x - 1,y);
	}
	if(y > 0 && table[x][y - 1] == 1)
	{
		table[x][y - 1] = 0;
		check(x,y - 1);
	}
	if(table[x + 1][y] == 1)
	{
		table[x + 1][y] = 0;
		check(x + 1,y);
	}
	if(table[x][y + 1] == 1)
	{
		table[x][y + 1] = 0;
		check(x,y + 1);
	}
}
int main()
{
	int testcase;
	int n, m, i, j, j_1, k;
	int x, y;
	scanf("%d",&testcase);
	for(i = 0; i < testcase; i++)
	{
		scanf("%d%d%d",&n,&m,&k);
		for(j = 0; j < k; j++)
		{
			scanf("%d%d",&x,&y);
			table[x][y] = 1;
		}
		for(j = 0; j < n; j++)
		{
			for(j_1 = 0; j_1 < m; j_1++)
			{
				if(table[j][j_1] == 1)
				{
					dap[i] = dap[i] + 1;
					table[j][j_1] = 0;
					check(j,j_1);
				}
			}
		}
	}
	for(i = 0; i < testcase; i++)
	{
		printf("%d\n",dap[i]);
	}
	return 0;
}