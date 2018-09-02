#include<stdio.h>
#define MAX 100005
int cage[MAX][2];
int n, num[MAX];
int dap;
int main()
{
	int i;
	scanf("%d",&n);
	num[0] = 1;
	num[1] = 3;
	cage[1][0] = 1;
	cage[1][1] = 1;
	for(i = 2; i <= n; i++)
	{
		cage[i][0] = cage[i - 1][1] + num[i - 2];
		cage[i][1] = cage[i - 1][0] + num[i - 2];
		cage[i][0] = cage[i][0] % 9901;
		cage[i][1] = cage[i][1] % 9901;
		num[i] = cage[i][0] + cage[i][1];
		num[i] = num[i] % 9901;
		num[i] = num[i] + num[i - 1];
		num[i] = num[i] % 9901;
	}
	dap = 1;
	for(i = 1; i <= n; i++)
	{
		dap = dap + cage[i][0] + cage[i][1];
		dap = dap % 9901;
	}
	printf("%d\n",dap);
	return 0;
}