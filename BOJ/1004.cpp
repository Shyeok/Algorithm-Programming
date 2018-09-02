#include<stdio.h>
double startx, starty, endx, endy;
int n, check[60];
int dap[1000];
int main()
{
	int i, j, testcase;
	double starx, stary, r;
	double helpx, helpy, d;
	scanf("%d",&testcase);
	for(i=1;i<=testcase;i++)
	{
		scanf("%lf %lf %lf %lf",&startx,&starty,&endx,&endy);
		scanf("%d",&n);
		dap[i] = 0;
		for(j=0;j<n;j++)
		{
			scanf("%lf %lf %lf",&starx,&stary,&r);
			helpx = startx - starx;
			helpy = starty - stary;
			if(helpx*helpx + helpy*helpy <= r*r && check[j] != i)
			{
				dap[i] = dap[i] + 1;
				check[j] = i;
			}
			helpx = endx - starx;
			helpy = endy - stary;
			if(helpx*helpx + helpy*helpy <= r*r)
			{
				if(check[j] == i)
				{
					dap[i] = dap[i] - 1;
				}
				else
				{
					dap[i] = dap[i] + 1;
					check[j] = i;
				}
			}
		}
	}
	for(i=1;i<=testcase;i++)
	{
		printf("%d\n",dap[i]);
	}
	return 0;
}