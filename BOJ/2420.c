#include<stdio.h>
int main()
{
	long long int n, m, dap;
	scanf("%lld %lld",&n,&m);
	if(n>m){dap = n - m;}
	else{dap = m - n;}
	printf("%lld",dap);
	return 0;
}