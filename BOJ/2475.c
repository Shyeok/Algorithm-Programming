#include <stdio.h>
int main()
{
	int i, n, dap, help;
	dap = help = 0;
	for(i=1;i<=5;i++)
	{
		scanf("%d",&n);
		dap = dap + n * n;
		dap = dap % 10;
	}
	printf("%d",dap);
	return 0;
}