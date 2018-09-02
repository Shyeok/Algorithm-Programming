#include<stdio.h>
int main()
{
	int i, j;
	long long int p[101];
	int testcase, n;
	p[1] = 1; p[2] = 1; p[3] = 1;
	scanf("%d",&testcase);
	for(i = 4; i <= 100; i++)p[i] = p[i - 2] + p[i - 3];
	for(i = 0; i < testcase; i++)
	{
		scanf("%d",&n);
		printf("%lld\n",p[n]);
	}
	return 0;
}