#include<stdio.h>
int n, dap;
int dy[1000005][2];
int main()
{
	int i;
	scanf("%d",&n);
	dy[1][1] = 1;
	dy[2][1] = 1;
	dy[2][0] = 1;
	for(i = 3; i <= n; i++)
	{
		dy[i][1] = dy[i - 1][1] + dy[i - 1][0];
		dy[i][1] = dy[i][1] % 15746;
		dy[i][0] =  dy[i - 2][1] + dy[i - 2][0];
		dy[i][0] = dy[i][0] % 15746;
	}
	dap = dy[n][0] + dy[n][1];
	dap = dap % 15746;
	printf("%d\n",dap);
	return 0;
}