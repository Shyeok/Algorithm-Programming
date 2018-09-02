#include<stdio.h>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
	int testcase;
	int n, m, p, time[101];
	int i, j, print;
	int a[100], imp[101];
	int su;
	queue<int> q;
	scanf("%d",&testcase);
	for(i = 0; i < testcase; i++)
	{
		scanf("%d%d",&n,&m);
		for(j = 0; j < n; j++)
		{
			scanf("%d",&a[j]);
			imp[j + 1] = a[j];
			q.push(j + 1);
		}
		sort(a,a+n);
		reverse(a,a+n);
		m = m + 1;
		p = 0;
		time[i] = 0;
		for(;;)
		{
			if(imp[q.front()] == a[p])
			{
				time[i] = time[i] + 1;
				p = p + 1;
				print = q.front();
				if(q.front() == m)break;
				q.pop();
			}
			else
			{
				su = q.front();
				q.pop();
				q.push(su);
			}
		}
		for(;;)
		{
			if(q.size() == 0)break;
			q.pop();
		}
	}
	for(i = 0; i < testcase; i++)
	{
		printf("%d\n",time[i]);
	}
	return 0;
}