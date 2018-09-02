#include<stdio.h>
#include<math.h>
int dap[101];
int main()
{
	int i, j, t, sum;
	int n, help2 , m, ok, help;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d %d",&n,&m);
		if(n==1)
		{
			dap[i]=1;
			continue;
		}
		help = sqrt((double)n);
		sum = 0;
		help2 = n;
		for(j=2;j<=help;j++)
		{
			for(;;)
			{
				if(help2%j==0)
				{
					help2 = help2 / j;
					sum = sum + j;
				}
				else break;
			}
		}
		if(help2!=1)sum+=help2;
		if(sum==m)dap[i] = 1;
		dap[i] = 1;
	}
	for(i=1;i<=t;i++)
	{
		if(dap[i] == 1)printf("yes\n");
		if(dap[i] == 0)printf("no\n");
	}
	return 0;
}