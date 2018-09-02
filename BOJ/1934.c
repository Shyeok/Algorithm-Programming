#include<stdio.h>
int n;
long long int dap[1001], help;
int min(int a, int b)
{
	if(a>b)return b;
	if(a<=b)return a;
}
int main()
{
	int i, j, k, l;
	int one, two, ok;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&one,&two);
		dap[i] = 1;
		for(j=2;j<=min(one,two);j++)
		{
			if(one%j == 0 && two%j == 0)
			{
				ok = 0;
				while(ok == 0)
				{
					if(one % j == 0 && two %j == 0)
					{
						dap[i] = dap[i] * j;
						one = one / j;
						two = two / j;
					}
					else{ok = 1;}
				}
			}
		}
		dap[i] = dap[i] * one * two;
	}
	for(i=1;i<=n;i++)
	{
		printf("%d\n",dap[i]);
	}
	return 0;
}