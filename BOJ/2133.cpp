#include<stdio.h>
int dp[31];
int main()
{
	int i, j;
	int n, minus;
	scanf("%d",&n);
	dp[2] = 3;
	dp[0] = 1;
	for(i = 3; i <= n; i++)
	{
		dp[i] = dp[i - 2] * 3;
		minus = 4;
		for(;;)
		{
			if(i - minus < 0)break;
			dp[i] = dp[i] + dp[i - minus] * 2;
			minus = minus + 2;
		}
	}
	printf("%d\n",dp[n]);
	return 0;
}