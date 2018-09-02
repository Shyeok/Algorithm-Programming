#include<stdio.h>
int dp[10000][2];
int main()
{
	int i;
	int n, wine[10000], dap = 0;
	int maxwine_0 = 0, maxwine_1 = 0;
	scanf("%d",&n);
	for(i = 0; i < n; i++)scanf("%d",&wine[i]);
	dp[0][0]  = wine[0];
	dap = wine[0];
	maxwine_1 = wine[0];
	for(i = 1; i < n; i++)
	{
		dp[i][0] = wine[i]  + maxwine_0;
		dp[i][1] = wine[i]  + dp[i - 1][0];
		if(maxwine_0 < maxwine_1)maxwine_0 = maxwine_1;
		maxwine_1 = 0;
		if(maxwine_1 < dp[i][0])maxwine_1 = dp[i][0];
		if(maxwine_1 < dp[i][1])maxwine_1 = dp[i][1];
		if(dap < dp[i][0])dap = dp[i][0];
		if(dap < dp[i][1])dap = dp[i][1];
	}
	printf("%d\n",dap);
	return 0;
}