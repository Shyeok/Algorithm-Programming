#include<stdio.h>
int a[100001];
int main()
{
	int i, testcase;
	int n, max;
	scanf("%d",&testcase);
	for(i = 0; i < testcase; i++)
	{
		scanf("%d",&n);
		a[i] = n;
		for(;;)
		{
			if(n == 1)break;
			if(n % 2 == 0)n = n / 2;
			else if(n % 2 == 1)n = n * 3 + 1;
			if(a[i] < n)a[i] = n;
		}
	}
	for(i = 0;i < testcase; i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}