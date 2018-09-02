#include<stdio.h>
long long int Cnt[100][3];
int main()
{
	int i, n;
	long long int dap;
	scanf("%d",&n);
	Cnt[1][1] = 1;
	Cnt[1][0] = 0;
	if(n >= 2)
	{
		for(i=2;i<=n;i++)
		{
			Cnt[i][1] = Cnt[i - 1][0];
			Cnt[i][0] = Cnt[i - 1][0] + Cnt[i - 1][1];
		}
	}
	dap = Cnt[n][0] + Cnt[n][1];
	printf("%lld\n",dap);
	return 0;
}