#include<stdio.h>
int n;
int plane[30][30];
double dap;
double ep, wp, np, sp;
void finddap(int x, int y, int moven, double p)
{
	if(moven == n)
	{
		dap = dap + p;
	}
	else
	{
		if(plane[x][y + 1] == 0)
		{
			plane[x][y + 1] = 1;
			finddap(x,y+1,moven + 1, p * ep);
			plane[x][y + 1] = 0;
		}
		if(plane[x][y - 1] == 0)
		{
			plane[x][y - 1] = 1;
			finddap(x,y - 1,moven + 1, p * wp);
			plane[x][y - 1] = 0;
		}
		if(plane[x - 1][y] == 0)
		{
			plane[x - 1][y] = 1;
			finddap(x - 1,y,moven + 1, p * np);
			plane[x - 1][y] = 0;
		}
		if(plane[x + 1][y] == 0)
		{
			plane[x + 1][y] = 1;
			finddap(x + 1,y,moven + 1, p * sp);
			plane[x + 1][y] = 0;
		}
	}
}
int main()
{
	scanf("%d",&n);
	scanf("%lf%lf%lf%lf",&ep,&wp,&np,&sp);
	ep = ep / 100;
	wp = wp / 100;
	np = np / 100;
	sp = sp / 100;
	dap = 0;
	plane[14][14] = 1;
	finddap(14,14,0,1);
	printf("%.10lf\n",dap);
	return 0;
}