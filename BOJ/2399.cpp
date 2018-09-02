#include<stdio.h>
int n, a[100001];
int help(int hi, int hi2)
{
	if(hi - hi2 > 0)return hi - hi2;
	else return hi2 - hi;
}
int main()
{
	int i, j;
	double dap;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	dap = 0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			dap = dap + help(a[i],a[j]);
		}
	}
	dap = dap * 2;
	printf("%.0lf",dap);
	return 0;
}