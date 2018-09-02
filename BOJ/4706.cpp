#include<stdio.h>
#include<math.h>
int main()
{
	double n, m;
	double dap;
	for(;;)
	{
		scanf("%lf%lf",&n,&m);
		if(n == 0 && m == 0)break;
		dap = 1 - ((m * m) / (n * n));
		dap = sqrt(dap);
		printf("%.3lf\n",dap);
	}
	return 0; 
}