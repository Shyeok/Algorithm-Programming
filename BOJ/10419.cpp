#include<stdio.h>
int main()
{
	int i, j;
	int testcase, n, dap;
	scanf("%d",&testcase);
	for(i = 0; i < testcase; i++)
	{
		scanf("%d",&n);
		for(j = 1 ;; j++)
		{
			if(n < j + j * j)break;
		}
		dap = j - 1;
		printf("%d\n",dap);
	}
	return 0;
}