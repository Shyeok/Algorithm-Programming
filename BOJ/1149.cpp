#include<stdio.h>
int money[1000][3];
int a[1000][3];
int main()
{
	int i, j;
	int n, dap;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d%d%d",&money[i][0],&money[i][1],&money[i][2]);
	}
	a[0][0] = money[0][0]; a[0][1] = money[0][1]; a[0][2] = money[0][2];
	for(i =  1; i < n; i++)
	{
		a[i][0] = money[i][0] + a[i - 1][1];
		if(a[i][0] > money[i][0] + a[i - 1][2])
		{
			a[i][0] = money[i][0] + a[i - 1][2];
		}
		a[i][1] = money[i][1] + a[i - 1][2];
		if(a[i][1] > money[i][1] + a[i - 1][0])
		{
			a[i][1] = money[i][1] + a[i - 1][0];
		}
		a[i][2] = money[i][2] + a[i - 1][1];
		if(a[i][2] > money[i][2] + a[i - 1][0])
		{
			a[i][2] = money[i][2] + a[i - 1][0];
		}
	}
	dap = a[n - 1][0];
	for(i = 0; i < 3; i++)
	{
		if(dap > a[n - 1][i])
		{
			dap = a[n - 1][i];
		}
	}
	printf("%d\n",dap);
	return 0;
}