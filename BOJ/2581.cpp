#include<stdio.h>
#include<math.h>
int m, n;
int main()
{
	int i, j, mindap = 0;
	int ok = 0, sum = 0;
	scanf("%d %d",&n,&m);
	for(i = n; i <= m; i++)
	{
		ok = 0;
		if(i == 1)ok = 1;
		for(j = 2; j <= sqrt((double)i); j++)
		{
			if(i % j == 0)
			{
				ok = 1;
				break;
			}
		}
		if(ok == 0 && mindap == 0)mindap = i;
		if(ok == 0)sum = sum + i;
	}
	if(mindap == 0)printf("-1\n");
	else 
	{
		printf("%d\n%d\n",sum,mindap);
	}
	return 0;
}