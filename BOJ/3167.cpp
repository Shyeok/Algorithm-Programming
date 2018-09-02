#include<stdio.h>
int people[1001][3];
int maxp[3];
int minp[3];
int main()
{
	int i, j;
	int n, m;
	int maxdap, mindap;
	scanf("%d%d",&n,&m);
	for(i = 0; i < n; i++)
	{
		scanf("%d%d",&people[i][0],&people[i][1]);
	}
	maxp[1] = people[0][1];
	maxdap = 0;
	for(i = 1; i < n; i++)
	{
		if(people[i][0] > maxp[0])
		{
			maxp[1] = (maxp[0] + maxp[1]) - people[i][0];
			maxdap = maxdap + maxp[0];
			maxp[0] = 0;
		}
		else 
		{
			maxdap = maxdap + people[i][0];
			maxp[0] = maxp[0] - people[i][0];
		}
		maxp[0] = maxp[0] + people[i][1];
		if(i % m == 0)
		{
			maxp[1] = maxp[1] + maxp[0];
			maxp[0] = 0;
		}
	}
	minp[1] = people[0][1];
	mindap = 0;
	for(i = 1; i < n; i++)
	{
		if(people[i][0] > minp[1])
		{
			mindap = mindap + (people[i][0] - minp[1]); 
			minp[0] = (minp[0] + minp[1]) - people[i][0];
			minp[1] = 0;
		}
		else 
		{
			minp[1] = minp[1] - people[i][0];
		}
		minp[0] = minp[0] + people[i][1];
		if(i % m == 0)
		{
			minp[1] = minp[1] + minp[0];
			minp[0] = 0;
		}
	}
	printf("%d %d\n",mindap,maxdap);
	return 0;
}