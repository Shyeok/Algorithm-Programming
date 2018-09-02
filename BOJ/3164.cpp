#include<stdio.h>
int main()
{
	int i, j;
	int a, b, c, d;
	double dap;
	int hello;
	dap = 0;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	for(i = b; i < d; i++)
	{
		if(i % 2 == 1)
		{
			if(a <= i + 1)
			{
				if(c > i + 1)
				{
					dap = dap + (i + 1 - a);
					dap = dap + (c - i - 1) / 2; 
				}
				else 
				{
					dap = dap + (c - a);
				}
			}
			else
			{
				if(a % 2 == 1) dap = dap + (c - a + 1) / 2;
				else dap = dap + (c - a) / 2;
			}
		}
		else
		{
			if(a <= i && i <= c)
			{
				dap = dap + (c - i) / 2;
			}
			else if(i <= c)
			{
				if(a % 2 == 1) dap = dap + (c - a + 1) / 2;
				else dap = dap + (c - a) / 2;
			}
		}
	}
	printf("%.lf\n",dap);
	return 0;
}