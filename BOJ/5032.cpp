#include<stdio.h>
int main()
{
	int a, b, c;
	int dap;
	scanf("%d%d%d",&a,&b,&c);
	a = a + b;
	dap = 0;
	for(;;)
	{
		if(a < c)break;
		a = a - c;
		a = a + 1;
		dap = dap + 1;
	}
	printf("%d\n",dap);
	return 0;
}