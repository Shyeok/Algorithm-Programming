#include<stdio.h>
int main()
{
	int i;
	long long int n, sum;
	sum = 0;
	scanf("%lld",&n);
	for(i = 1; i < n; i++)
	{
		sum = sum + (i * n);
		sum = sum + i;
	}
	printf("%lld\n",sum);
	return 0;
}