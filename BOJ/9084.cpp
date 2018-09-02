#include<stdio.h>
int main()
{
	int i, j, k;
	int testcase;
	int n, m, a[20];
	scanf("%d",&testcase);
	for(i = 0; i < testcase; i++)
	{
		int cnt[10001];
		scanf("%d",&n);
		for(j = 0; j < n; j++)scanf("%d",&a[j]);
		scanf("%d",&m);
		for(j = 0; j <= m; j++)cnt[j] = 0;
		cnt[0] = 1;
		for(j = 0; j < n; j++)
		{
			for(k = 1; k <= m; k++)
			{
				if((k - a[j]) >= 0 )cnt[k] = cnt[k - a[j]] + cnt[k];
			}
		}
		printf("%d\n",cnt[m]);
	}
	return 0;
}