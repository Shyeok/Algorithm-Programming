#include<stdio.h>
int dap[1001];
int main()
{
	int i, j;
	int t, n, m;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d %d",&n,&m);
		dap[i] = 1;
		for(j=1;j<=m;j++)
		{
			dap[i] = dap[i] * n;
			dap[i] = dap[i] % 10;
		}
	}
	for(i=1;i<=t;i++)
	{
		if(dap[i] == 0)printf("10\n");
		else printf("%d\n",dap[i]);
	}
	return 0;
}