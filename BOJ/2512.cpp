#include<stdio.h>
#include<algorithm>
int main()
{
	int i, n;
	int arr[20000];
	double money, sum, help, minus;
	double money_max = -1;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		arr[i] = 0;
		scanf("%d",&arr[i]);
	}
	std::sort(arr,arr+n);
	scanf("%lf",&money);
	sum = 0; help = 0; minus = 0;
	for(i = 0; i < n; i++)
	{
		if(arr[i] * (n - i) + sum > money)
		{
			help = arr[i] * (n - i) + sum - money;
			minus = help / (n - i);
			minus = minus + (n - i);
			minus = (int)minus;
			for(;;)
			{
				if((arr[i] - minus) * (n - i) + sum > money)break;
				money_max = (arr[i] - minus);
				minus = minus - 1;
			}
		}
		if(money_max != -1)break;
		sum = sum + arr[i];
	}
	if(money_max == -1)printf("%d\n",arr[n - 1]);
	else printf("%.lf\n",money_max);
	return 0;
}