#include<stdio.h>
int a[30];
int dap[300000];
int main()
{
	int i, j;
	int testcase, n;
	a[1] = 1; a[2] = 1;
	for(i = 3;; i++)
	{
		if(a[i - 2] + a[i - 1] >	25000)break;
		a[i] = a[i - 2] + a[i - 1];
	}
	a[1] = 0;
	scanf("%d",&testcase);
	for(i = 0; i < testcase; i++)
	{
		scanf("%d",&n);
		for(j = 22; j >= 1; j--)
		{
			if(n == 0)break;
			if(n >= a[j])
			{
				n = n - a[j];
				dap[i] = dap[i] + a[j - 1];
			}
		}
	}
	for(i = 0; i < testcase; i++)
	{
		printf("%d\n",dap[i]);
	}
	return 0;
}