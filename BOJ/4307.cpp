#include<stdio.h>
int n, m, p[100000];
int mint[100000], maxt[100000];
int min(int a,int b)
{
	if(a > b)return b;
	else return a;
}
int max(int a,int b)
{
	if(b > a)return b;
	else return a;
}
int main()
{
	int i, j;
	int testcase;
	scanf("%d",&testcase);
	for(i = 0; i < testcase; i++)
	{
		scanf("%d %d",&n,&m);
		for(j = 0; j < m; j++)
		{
			scanf("%d",&p[j]);
		}
		mint[i] = 0;
		maxt[i] = 0;
		for(j = 0; j < m; j++)
		{
			mint[i] = max(min(p[j],n - p[j]),mint[i]);
			maxt[i] = max(max(p[j],n - p[j]),maxt[i]);
		}
	}
	for(i = 0; i < testcase; i++)
	{
		printf("%d %d\n",mint[i],maxt[i]);
	}
	return 0;
}