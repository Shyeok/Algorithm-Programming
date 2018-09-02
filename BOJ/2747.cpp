#include<stdio.h>
int main()
{
	int i, j;
	int a, b, c;
	int dap, n;
	scanf("%d",&n);
	a = 0; b = 0; c = 1;
	for(i = 2; i <= n; i++)
	{
		a = b;
		b = c;
		c = b + a;
	}
	dap = c;
	printf("%d\n",dap);
	return 0;
}
