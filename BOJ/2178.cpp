#include<cstdio>
using namespace std;
int table[101][101][2];
int a[100000][2];
int main()
{
	int n, m;
	int head, tail, inc;
	char c;
	scanf("%d%d",&n,&m);
	for(int i = 0; i < n; i++)
	{
		getchar();
		for(int j = 0; j < m; j++)
		{
			scanf("%c",&c);
			if(c == '1')table[i][j][0] = 1;
			else table[i][j][0] = 0;
			table[i][j][1] = -1;
		}
	}
	table[0][0][1] = 1;
	a[0][0] = 0; a[0][1] = 0;
	head = 0; tail = 0;
	int x, y;
	int ok;
	for(;;)
	{
		inc = tail;
		for(int i = head; i <= tail; i++)
		{
			x = a[i][0]; y = a[i][1];
			if(table[x - 1][y][0] == 1 && table[x - 1][y][1] == -1)
			{
				inc = inc + 1;
				a[inc][0] = x - 1; a[inc][1] = y;
				table[x - 1][y][1] = table[x][y][1] + 1;
			}
			if(table[x +1][y][0] == 1 && table[x + 1][y][1] == -1)
			{
				inc = inc + 1;
				a[inc][0] = x + 1; a[inc][1] = y;
				table[x + 1][y][1] = table[x][y][1] + 1;
			}
			if(table[x][y - 1][0] == 1 && table[x][y - 1][1] == -1)
			{
				inc = inc + 1;
				a[inc][0] = x; a[inc][1] = y - 1;
				table[x][y - 1][1] = table[x][y][1] + 1;
			}
			if(table[x][y + 1][0] == 1 && table[x][y + 1][1] == -1)
			{
				inc = inc + 1;
				a[inc][0] = x; a[inc][1] = y + 1;
				table[x][y + 1][1] = table[x][y][1] + 1;
			}
		}
		ok = 0;
		for(int i = tail + 1; i <= inc; i++)
		{
			if(a[i][0] == n - 1 && a[i][1] == m - 1)
			{
				ok = 1;
				break;
			}
		}
		if(ok == 1)break;
		head = tail + 1;
		tail = inc;
	}
	printf("%d\n",table[n - 1][m - 1][1]);
	return 0;
}