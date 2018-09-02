#include<stdio.h>
int check[1000];
int main()
{
	int i;
	int n, m;
	int maxcnt, maxsu;
	m = 0;
	for(i = 0; i < 10; i++)
	{
		scanf("%d",&n);
		m = m + n;
		check[n / 10] = check[n / 10] + 1;
	}
	m = m / 10;
	maxcnt = 0;
	for(i = 1; i <= 100; i++)
	{
		if(maxcnt < check[i])
		{
			maxcnt = check[i];
			maxsu = i;
		}
	}
	printf("%d\n%d\n",m,maxsu*10);
	return 0;
}