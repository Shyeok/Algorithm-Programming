#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	int n, m;
	double su;
	int min, sum;
	min = -1; sum = 0;
	scanf("%d%d",&n,&m);
	for(i = n; i <= m; i++)
	{
		su = sqrt((double)i);
		if(su == (int)su)
		{
			if(min == -1)min = i;
			sum = sum + i;
		}
	}
	if(min == -1)
	{
		printf("-1\n");
	}
	else
	{
	printf("%d\n%d\n",sum,min);
	}
	return 0;
}