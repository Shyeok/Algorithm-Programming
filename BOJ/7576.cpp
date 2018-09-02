#include<stdio.h>
int table[1000][1000];
int a[1000001][2];
int main()
{
	int i, j;
	int n, m, apple = 0;
	int num = 0, time = 0;
	int start, end;
	apple = 0;
	scanf("%d%d",&n,&m);
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d",&table[i][j]);
			if(table[i][j] == 1)
			{
				num = num + 1;
				a[num][0] = i;
				a[num][1] = j;
			}
			if(table[i][j] != -1)apple = apple + 1;
		}
	}
	start = 1; end = num;
	int x, y;
	for(;;)
	{
		if(apple == num)break;
		time = time + 1;
		for(i = start; i <= end; i++)
		{
			x = a[i][0]; y = a[i][1];
			if(x > 0 && table[x - 1][y] == 0)
			{
				table[x - 1][y] = 1;
				num = num + 1;
				a[num][0] = x - 1;  a[num][1] = y;
			}
			if(y > 0 && table[x][y - 1] == 0)
			{
				table[x][y - 1] = 1;
				num = num + 1;
				a[num][0] = x;  a[num][1] = y - 1;
			}
			if(x < m - 1 && table[x + 1][y] == 0)
			{
				table[x + 1][y] = 1;
				num = num + 1;
				a[num][0] = x + 1;  a[num][1] = y;
			}
			if(y < n - 1 && table[x][y + 1] == 0)
			{
				table[x][y + 1] = 1;
				num = num + 1;
				a[num][0] = x;  a[num][1] = y + 1;
			}
		}
		if(num != apple && num == end)
		{
			time = -1;
			break;
		}
		start = end + 1;
		end = num;
	}
	printf("%d\n",time);
	return 0;
}