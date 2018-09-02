#include<stdio.h>
int a, b, c, d;
int dap[3];
int maxf(int a, int b)
{
	if(a >= b)return a;
	else return b;
}
int minf(int a, int b)
{
	if(a <= b)return a;
	else return b;
}
int main()
{
	int max, min, help = 0;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	dap[1] = a * d + c * b;
	dap[2] = d * b;
	max = maxf(dap[1],dap[2]);
	min = minf(dap[1],dap[2]);
	while(help != 1)
	{
		if(max % min == 0)break;
		help = max - min;
		max = maxf(min,help);
		min = minf(min,help);
	}
	dap[1] = dap[1] / min;
	dap[2] = dap[2] / min;
	printf("%d %d",dap[1],dap[2]);
	return 0;
}