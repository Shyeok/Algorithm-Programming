#include<stdio.h>
int arr[200];
int brr[200];
int dy[300001];
int main()
{
	int i, j;
	int n, dap;
	scanf("%d",&n);
	arr[1] = 1;
	brr[1] = 1;
	for(i = 2; i <= 130; i++)
	{
		arr[i] = arr[i - 1] + i;
		brr[i] = arr[i] + brr[i - 1];
		if(brr[i] > 300000)break;
	}
	dap = 0;
	for(i = 1; i <= 125; i++)
	{
		if(brr[i] > n)break;
		dy[brr[i]] = 1;
		for(j = 1; j <= n; j++)
		{
			if(j + brr[i] > n)break;
			if(dy[j] != 0)
			{
				if(dy[j + brr[i]] == 0 || dy[j + brr[i]] > dy[j] + 1)
				{
					dy[j + brr[i]] = dy[j] + 1;
				}
			}
		}
	}
	printf("%d\n",dy[n]);
	return 0;
}