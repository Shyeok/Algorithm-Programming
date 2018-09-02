#include<stdio.h>
int main()
{

	int i, j, k;
	int testcase;
	int n, a[1001];
	int dap, temp;
	scanf("%d",&testcase);
	for(i = 0; i < testcase; i++)
	{
		scanf("%d",&n);
		for(j = 0; j < n; j++)
		{
			scanf("%d",&a[j]);
		}
		dap = 0;
		for(j = 0; j < n; j++)
		{
			for(k = 0; k < n - j - 1; k++)
			{

				if(a[k] > a[k + 1])
				{
					dap = dap + 1;
					temp = a[k];
					a[k] = a[k + 1];
					a[k + 1] = temp;
				}
			}
		}
		printf("%d\n",dap);
	}
	return 0;
}