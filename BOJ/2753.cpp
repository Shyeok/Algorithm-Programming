#include<stdio.h>
int main()
{
	int dap;
	int n;
	scanf("%d",&n);
	if(n % 4 == 0)
	{
		dap = 1;
		if(n % 100 == 0)dap = 0;
		if(n % 400 == 0)dap = 1;
	}
	printf("%d\n",dap);
	return 0;
}