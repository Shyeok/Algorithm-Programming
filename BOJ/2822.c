#include <stdio.h>
int point[3][10];
int main()
{
	int i, j;
	int help, dap;
	for(i=1;i<=8;i++)
	{
		scanf("%d",&point[1][i]);
		point[2][i] = i;
	}
	for(i=1;i<=7;i++)
	{
		for(j=i+1;j<=8;j++)
		{
			if(point[1][i] < point[1][j])
			{
				help = point[1][i];
				point[1][i] = point[1][j];
				point[1][j] = help;
				help = point[2][i];
				point[2][i] = point[2][j];
				point[2][j] = help;
			}
		}
	}
	dap = 0;
	for(i=1;i<=5;i++)
	{
		dap = dap + point[1][i];
	}
	printf("%d\n",dap);
	for(i=1;i<=4;i++)
	{
		for(j=i+1;j<=5;j++)
		{
			if(point[2][i] > point[2][j])
			{
				help = point[2][i];
				point[2][i] = point[2][j];
				point[2][j] = help;
			}
		}
	}
	for(i=1;i<=5;i++)
	{
		printf("%d ",point[2][i]);
	}
	return 0;
}