#include<stdio.h>
#include<math.h>
double n, m, a, b;
int main()
{
	int dap_a, dap_b;
	scanf("%lf %lf %lf",&n,&a,&b);
	m = n / sqrt(a*a+b*b);
	dap_a = m * a;
	dap_b = m * b;
	printf("%d %d\n",dap_a,dap_b);
	return 0;
}