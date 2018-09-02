#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
int x[100001], y[100001];
int main()
{
	int i;
	int n, m;
	int sumx, sumy;
	int d, d_1;
	sumx = 0; sumy = 0;
	scanf("%d %d",&n,&m);
	for(i = 0; i < m;i++)
	{
		scanf("%d %d",&x[i],&y[i]);
	}
	sort(x,x + m);
	sort(y,y + m);
	d = 0;
	for(i = 0; i < m; i++)
	{
	   d = d + abs(x[m / 2] - x[i]) + abs(y[m / 2] - y[i]); 
	}
	if(m % 2 == 0)
	{
		d_1 = 0;
		for(i = 0; i < m; i++)
		{
		   d_1 = d_1 + abs(x[m / 2 - 1] - x[i]) + abs(y[m / 2 - 1] - y[i]); 
		}
		if(d > d_1)
		{
			d = d_1;
		}
	}
	printf("%d\n",d);
	return 0;
}