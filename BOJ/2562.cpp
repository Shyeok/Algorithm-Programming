#include<stdio.h>
int main()
{
	int i, n, dap, order;
	dap = 0;
	for(i = 1; i <= 9 ;i ++)
	{
		scanf("%d",&n);
		if(n > dap)
		{
			dap = n; 
			order = i;
		}
	}
	printf("%d\n%d",dap,order);
	return 0;
}