#include<stdio.h>
int main()
{
	int i;
	int a, b, c[10], d[10];
	int e, f, g, h, dap[10], len;
	int help, Dap;
	scanf("%d%d",&a,&b);
	e = 0;
	for(;;)
	{
		c[e] = a % 10;
		a = a / 10;
		if(a == 0)break;
		e = e + 1;
	}
	f = 0;
	for(;;)
	{
		d[f] = b % 10;
		b = b / 10;
		if(b == 0)break;
		f = f + 1;
	}
	g = 0; help =1;
	for(i = e; i >= 0; i--)
	{
		g = g + c[i] * help;
		help = help * 10;
	}
	h = 0; help = 1;
	for(i = f; i >= 0; i--)
	{
		h = h + d[i] * help;
		help = help * 10;
	}
	g = g + h;
	len = 0;
	for(;;)
	{
		dap[len] = g % 10;
		g = g / 10;
		if(g == 0)break;
		len = len + 1;
	}
	help = 1; Dap = 0;
	for(i = len; i >= 0; i--)
	{
		Dap = Dap + dap[i] * help;
		help = help * 10;
	}
	printf("%d\n",Dap);
	return 0;
}