#include<stdio.h>
int main()
{
	int i, j;
	int n, k, sum;
	int temp[100], dap;
	scanf("%d%d",&n,&k);
	for(i = 0; i < n; i++)
	{
		scanf("%d",&temp[i]);
	}
	dap = -100000;
	for(i = 0; i <= n - k; i++)
	{
		sum = 0;
		for(j = i; j < i + k; j++)
		{
			sum = sum + temp[j];
		}
		if(sum > dap)dap = sum;
	}
	printf("%d\n",dap);
	return 0;
}