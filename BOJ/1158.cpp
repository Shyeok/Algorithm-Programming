#include<cstdio>
#include<queue>
using namespace std;
int main()
{
	int i, j;
	int n, m;
	int su;
	queue<int> q;
	scanf("%d%d",&n,&m);
	for(i = 1; i <= n; i++)
	{
		q.push(i);
	}
	printf("<");
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= m; j++)
		{
			su = q.front();
			q.pop();
			if(j != m)q.push(su);
		}
		printf("%d",su);
		if(i != n)printf(", ");
	}
	printf(">\n");
	return 0;
}