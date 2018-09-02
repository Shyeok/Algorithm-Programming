#include<stdio.h>
int n, dap;
int main()
{
	int i, help;
	dap = 1;
	scanf("%d",&n);
	help = 2;
	for(i=1;i<=n;i++)
	{
		help = help + help - 1;
	}
	dap = help * help;
	printf("%d",dap);
	return 0;
}