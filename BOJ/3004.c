#include<stdio.h>
int main()
{
	int n, dap;
	scanf("%d",&n);
	if(n%2==0)
	{
		dap = ((n/2)+1)*((n/2)+1);
	}
	else
	{
		dap = ((n/2)+2)*((n/2)+1);
	}
	printf("%d",dap);
	return 0;
}