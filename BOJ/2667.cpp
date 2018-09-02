#include<stdio.h>
#include<algorithm>
using namespace std;
int table[30][30];
int dap[1000], cnt;
void check(int x, int y)
{
	if(table[x - 1][y] == 1)
	{
		table[x - 1][y] = 0;
		cnt = cnt + 1;
		check(x - 1,y);
	}
	if(table[x][y - 1] == 1)
	{
		table[x][y - 1] = 0;
		cnt = cnt + 1;
		check(x,y - 1);
	}
	if(table[x + 1][y] == 1)
	{
		table[x + 1][y] = 0;
		cnt = cnt + 1;
		check(x + 1,y);
	}
	if(table[x][y + 1] == 1)
	{
		table[x][y + 1] = 0;
		cnt = cnt + 1;
		check(x,y + 1);
	}
}
int main()
{
	int i, j;
	int n, m;
	char c;
	scanf("%d",&n);
	for(i = 1; i <= n; i++)
	{
		getchar();
		for(j = 1; j <= n; j++)
		{
			scanf("%c",&c);
			if(c == '0')table[i][j] = 0;
			else table[i][j] = 1;
		}
	}
	m = -1;
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			if(table[i][j] == 1)
			{
				m = m + 1; cnt = 1;
				table[i][j] = 0;
				check(i,j); 
				dap[m] = cnt;
			}
		}
	}
	sort(dap,dap + m + 1);
	printf("%d\n",m + 1);
	for(i  = 0; i <= m; i++)
	{
		printf("%d\n",dap[i]);
	}
	return 0;
}