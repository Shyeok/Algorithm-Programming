#include<stdio.h>
int n;
long long int dap;
int main()
{
	int i, help;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&help);
		dap = dap + help;
	}
	dap = dap - n + 1;
	printf("%d",dap);
	return 0;
}