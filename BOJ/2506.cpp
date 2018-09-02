#include<stdio.h>
int main()
{
	int i, j;
	int n, dap;
	int hi, hello;
	dap = 0;
	scanf("%d",&n);
	hi = 0;
	for(i = 1; i <= n; i++)
	{
		scanf("%d",&hello);
		if(hello == 1)
		{
			hi = hi + 1;
			dap = dap + hi;
		}
		else
		{
			hi = 0;
		}
	}
	printf("%d\n",dap);
	return 0;
}