#include<cstdio>
int table[51][51][3];
int a[2][3000][2];
int main()
{
	int i, j;
	int n;
	char c;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		getchar();
		for(j = 0; j < n; j++)
		{
			scanf("%c",&c);
			if(c == '1')table[i][j][0] = 1;
			else table[i][j][0] = 0;
			table[i][j][1] = 999999;
		}
	}
	int len[2];
	int inc, m = 0;
	table[0][0][1] = 0;
	len[0] = 0; len[1] = 0;
	int x, y, help = 0;
	for(;;)
	{
		len[(m + 1) % 2] = -1;
		for(i = 0; i <= len[m % 2]; i++)
		{
			x = a[m % 2][i][0]; y = a[m % 2][i][1];
			help = 1 - table[x][y][0];
 			if(x > 0 && table[x - 1][y][1] > table[x][y][1] + help)
			{
				len[(m + 1) % 2] = len[(m + 1) % 2] + 1;
				table[x - 1][y][1] = table[x][y][1] + help;
				a[(m + 1) % 2][len[(m + 1) % 2]][0] = x - 1;
				a[(m + 1) % 2][len[(m + 1) % 2]][1] = y;
			}
			if( y > 0 && table[x][y - 1][1] > table[x][y][1] + help)
			{
				len[(m + 1) % 2] = len[(m + 1) % 2] + 1;
				table[x][y - 1][1] = table[x][y][1] + help;
				a[(m + 1) % 2][len[(m + 1) % 2]][0] = x;
				a[(m + 1) % 2][len[(m + 1) % 2]][1] = y -1;
			}
			if(table[x + 1][y][1] > table[x][y][1] + help)
			{
				len[(m + 1) % 2] = len[(m + 1) % 2] + 1;
				table[x + 1][y][1] = table[x][y][1] + help;
				a[(m + 1) % 2][len[(m + 1) % 2]][0] = x + 1;
				a[(m + 1) % 2][len[(m + 1) % 2]][1] = y;
			}
			if(table[x][y + 1][1] > table[x][y][1] + help)
			{
				len[(m + 1) % 2] = len[(m + 1) % 2] + 1;
				table[x][y + 1][1] = table[x][y][1] + help;
				a[(m + 1) % 2][len[(m + 1) % 2]][0] = x;
				a[(m + 1) % 2][len[(m + 1) % 2]][1] = y + 1;
			}
		}
		if(len[(m + 1) % 2] == -1)break;
		m = m + 1;
	}
	printf("%d\n",table[n - 1][n - 1][1]);
	return 0;
}