#include<stdio.h>
int main()
{
	int n, m;
	int dap;
	scanf("%d%d",&n,&m);
	dap = (n - 1) + n * (m - 1);
	printf("%d\n",dap);
	return 0;
}