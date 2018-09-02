#include<stdio.h>
int dap[100000];
int main()
{
	double a, b, c, d;
	double e, f, g, h;
	int cnt = -1;
	for(;;)
	{
		scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
		cnt = cnt + 1;
		if(a == b && b == c && c == d && a == 0)break;
		for(;;)
		{
			if(a == b && c == d && a == d)break;
			e = a - b;
			f = b - c;
			g = c - d;
			h = d - a;
			if(e < 0)e = e * -1;
			if(f < 0)f = f * -1;
			if(g < 0)g = g * -1;
			if(h < 0)h = h * -1;
			dap[cnt] = dap[cnt] + 1;
			a = e; b = f; c = g; d = h;
		}
	}
	for(int i = 0; i < cnt; i++)
	{
		printf("%d\n",dap[i]);
	}
	return 0;
}