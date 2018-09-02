#include<stdio.h>
int dap[10000][3];
int one, zero;
int main()
{
	int i, j, testcase;
	int n, a, b, c;
	scanf("%d",&testcase);
	for(i = 0; i < testcase; i++)
	{
		scanf("%d",&n);
		one = 0; zero = 0;
		a = 1; b = 0; c = 0;
		for(j = 0; j < n; j++)
		{
			c = b + a;
			a = b;
			b = c;
		}
		dap[i][0] = a; dap[i][1] = b;
	}
	for(i = 0; i < testcase; i++)
	{
		printf("%d %d\n",dap[i][0], dap[i][1]);
	}
	return 0;
}