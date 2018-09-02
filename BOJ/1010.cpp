#include<stdio.h>
int main()
{
	int testcase, i, j, k, min, max;
	long long int a[100000];
	scanf("%d",&testcase);
	for(i = 0; i < testcase; i++)
	{
		a[i] = 1;
		scanf("%d %d",&min,&max);
		k = 1;
		for(j = min + 1; j <= max; j++)
		{
			a[i] = a[i] * j;
			if(max - min >= k && a[i] % k == 0)
			{
				a[i] = a[i] / k;
				k = k + 1;
			}
		}
		if(max - min>= k)
		{
			while(1)
			{
				if(k > max - min)break; 
				a[i] = a[i] / k;
				k = k + 1;
			}
		}
	}
	for(i = 0; i < testcase; i++)
	{
		printf("%lld\n",a[i]);
	}
	return 0;
}