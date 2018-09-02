#include<cstdio>
#include<queue>
using namespace std;
int main()
{
	int n, m;
	int i, a[50];
	int b, c, d, su;
	queue<int> q;
	scanf("%d%d",&n,&m);
	for(i = 0; i < m; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i = 1; i <= n; i++)
	{
		q.push(i);
	}
	b = 0; c = 0; d = 0;
	for(;;)
	{
		if(c == m)break;
		if(a[c] == q.front())
		{
			if(d < n - d)b = b + d;
			else b = b + n - d;
			q.pop();
			n = n - 1;
			c = c + 1;
			d = 0;
		}
		else 
		{
			su = q.front();
			q.pop();
			q.push(su);
			d = d + 1;
		}
	}
	printf("%d\n",b);
	return 0;
}