#include<stdio.h>
#include<queue>
using namespace std;
int main()
{
	priority_queue<int,vector<int>,greater<int> > pq;
	int i, n, m;
	int su, dap[100000];
	m = -1; 
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d",&su);
		if(su == 0)
		{
			m = m + 1;
			if(pq.empty() == 0)
			{
				dap[m] = pq.top();
				pq.pop();
			}
			else
			{
				dap[m] = 0;
			}
		}
		else pq.push(su);
	}
	for(i = 0; i <= m; i++)
	{
		printf("%d\n",dap[i]);
	}
	return 0;
}