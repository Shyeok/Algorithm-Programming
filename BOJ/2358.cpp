#include<stdio.h>
#include<algorithm>
using namespace std;
int x[100000], y[100000];
int main()
{
	int i,re;
	int n, m, p, su;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d%d",&x[i],&y[i]);
	}
	sort(x,x+n);
	sort(y,y+n);
	su = x[0];
	m = 0; p = 1;
	re = 1;
	for(;;)
	{
		if(p == n)break;
		if(x[p] != su)
		{
			if(re >= 2)m = m + 1;
			re = 1; su = x[p];
		}
		else re = re + 1;
		p = p + 1;
	}
	if(re >= 2)m = m + 1;
	su = y[0]; p = 1;
	re = 1;
	for(;;)
	{
		if(p == n)break;
		if(y[p] != su)
		{
			if(re >= 2)m = m + 1;
			re = 1; su = y[p];
		}
		else re = re + 1;
		p = p + 1;
	}
	if(re >= 2)m = m + 1;
	printf("%d\n",m);
	return 0;
}