#include<stdio.h>
int n, len, has[15];
int now[4][15];
int main()
{
	int i, j;
	int help, dap;
	scanf("%d",&n);
	for(;;)
	{
		if(n == 0)break;
		if(n%10 != 6 && n%10 != 9)
		{
			has[n%10]++;
			help = n % 10;
			n = n - help;
			n = n / 10;
		}
		else 
		{
			has[6]++;
			help = n % 10;
			n = n - help;
			n = n / 10;
		}
	}
	for(i=0;i<=8;i++)
	{
		now[1][i] = 1;
		now[2][i] = 1;
	}
	now[1][6]++;
	now[2][6]++;
	dap = 1;
	for(i=0;i<=8;i++)
	{
		if(has[i] != 0)
		{
			if(has[i] > now[2][i])
			{
				for(;;)
				{
					if(has[i] <= now[2][i])break;
					for(j=i;j<=8;j++)
					{
						now[2][j] = now[2][j] + now[1][j];
					}
					dap = dap + 1;
				}
			}
		}
	}
	printf("%d",dap);
	return 0;
}