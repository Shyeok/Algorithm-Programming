#include<stdio.h>
int money[200];
int dy[20000];
int main()
{
	int i, j;
	int n, k;
	scanf("%d%d",&n,&k);
	for(i = 0; i < n; i++)
	{
		scanf("%d",&money[i]);
	}
	for(i = 0; i < n; i++)
	{
		if(money[i] <= k)
		{
			dy[money[i]] = dy[money[i]] + 1;
			for(j = 1; j <= k; j++)
			{
				if(j + money[i] > k)break;
				dy[j + money[i]] = dy[j + money[i]] + dy[j];
			}
		}
	}
	printf("%d\n",dy[k]);
	return 0;
}