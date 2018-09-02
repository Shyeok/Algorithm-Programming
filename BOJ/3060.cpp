#include<stdio.h>
int main()
{
	int i, j;
	int testcase, n, m;
	int dap[10000], feed;
	scanf("%d",&testcase);
	for(i = 0; i < testcase; i++)
	{
		feed = 0;
		scanf("%d",&n);
		for(j = 0; j < 6; j++)
		{
			scanf("%d",&m);
			feed = feed + m;
		}
		dap[i] = 0;
		for(;;)
		{
			dap[i] = dap[i] + 1;
			if(feed > n)break;
			feed = feed * 4;
		}
	}
	for(i = 0; i < testcase; i++)
	{
		printf("%d\n",dap[i]);
	}
	return 0;
}