#include<stdio.h>
int count[1001][10];
int main()
{
	int i, j, n;
	int testcase, dap;
	scanf("%d",&testcase);
	for(i = 0; i < 10; i++)count[1][i] = 1;
	for(i = 2; i <= 1000; i++)
	{
		count[i][0] = count[i - 1][7];
		count[i][1] = count[i - 1][2] + count[i - 1][4];
		count[i][2] = count[i - 1][1] + count[i - 1][3] + count[i - 1][5];
		count[i][3] = count[i - 1][2] + count[i - 1][6];
		count[i][4] = count[i - 1][1] + count[i - 1][5] + count[i - 1][7];
		count[i][5] = count[i - 1][2] + count[i - 1][4] + count[i - 1][6] + count[i - 1][8];
		count[i][6] = count[i - 1][3] + count[i - 1][5] + count[i - 1][9];
		count[i][7] = count[i - 1][0] + count[i - 1][4] + count[i - 1][8];
		count[i][8] = count[i - 1][5] + count[i - 1][7] + count[i - 1][9];
		count[i][9] = count[i - 1][6] + count[i - 1][8];
		for(j = 0; j < 10; j++)
		{
			count[i][j] = count[i][j] % 1234567;
		}
	}
	for(i = 0; i < testcase; i++)
	{
		scanf("%d",&n);
		dap = 0;
		for(j = 0; j < 10; j++)
		{
			dap = dap + count[n][j];
		}
		dap = dap % 1234567;
		printf("%d\n",dap);
	}
	return 0;
}