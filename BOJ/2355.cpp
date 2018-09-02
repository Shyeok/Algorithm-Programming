#include<stdio.h>
int change(double*a,double*b)
{
	double help;
	help = *a;
	*a = *b;
	*b = help;
	return 0;
}
int main()
{
	double n, m, cnt_n, cnt_m;
	double sum_n, sum_m, dap;
	scanf("%lf %lf",&n,&m);
	if(n*n > m*m)change(&n,&m);
	if(n <= 0)cnt_n = n * -1;
	else cnt_n = n;
	if(m <= 0)cnt_m = m * -1;
	else cnt_m = m;
	sum_n = (cnt_n + 1)*n*0.5;
	sum_m = (cnt_m + 1)*m*0.5;
	if(n * m >= 0)
	{
		dap = sum_m - sum_n;
		dap = dap + n;
	}
	else 
	{
		dap = sum_m + sum_n;
	}
	printf("%.lf\n",dap);
	return 0;
}