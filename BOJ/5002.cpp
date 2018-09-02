#include<stdio.h>
int main()
{
	int i, j;
	int n, m, p[101];
	int diff, dap;
	char c;
	scanf("%d",&n);
	getchar();
	m = 0;
	for(;;)
	{
		scanf("%c",&c);
		if(c == '\n')break;
		m = m + 1;
		if(c == 'W')p[m] = 1;
		else p[m] = -1;
	}
	diff = 0;
	dap = 1;
	diff = p[1];
	for(i = 1; i < m; i++)
	{
		p[i] = p[i + 1];
	}
	m = m - 1;
	for(i = 1; i <= m; i++)
	{
		if((diff + p[i]) * (diff + p[i]) <= n * n)
		{
			diff = diff + p[i];
			for(j = i; j <= m; j++)
			{
				p[j] = p[j + 1];
			}
			m = m - 1;
			i = i - 1;
			dap = dap + 1;
		}
		else if(i + 1 <= m && (diff + p[i + 1]) * (diff + p[i + 1]) <= n * n)
		{
			diff = diff + p[i + 1];
			for(j = i + 1; j <= m; j++)
			{
				p[j] = p[j + 1];
			}
			m = m - 1;
			i = i - 1;
			dap = dap + 1;
		}
		else break;
	}
	printf("%d\n",dap);
	return 0;
}