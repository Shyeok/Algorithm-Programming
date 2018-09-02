#include<stdio.h>
int main()
{
	int n, dap;
	int a[3], b[3];
	scanf("%d",&n);
	a[0] = n / 10;
	a[1] = n % 10;
	dap = 0;
	for(;;)
	{
		dap = dap + 1;
		b[1] = (a[0] + a[1]) % 10;
		b[0] = a[1];
		a[0] = b[0];
		a[1] = b[1];
		if(n == a[0] * 10 + a[1])break;
	}
	printf("%d\n",dap);
	return 0;
}