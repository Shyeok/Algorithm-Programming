#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int n, m;
int check[1000], dap[1000];
vector<int>a[1000];
void Dfs(int p);
void Bfs(int start);
int main()
{
	int i, j;
	int start, one, two;
	scanf("%d %d %d",&n,&m,&start);
	for(i = 0; i < m; i++)
	{
		scanf("%d%d",&one,&two);
		a[one - 1].push_back(two - 1);
		a[two - 1].push_back(one - 1);
	}
	for(i = 0; i < n; i++)sort(a[i].begin(),a[i].end());
	check[start - 1] = 1;
	printf("%d",start);
	Dfs(start - 1);
	printf("\n");
	for(i = 0; i < n; i++)check[i] = 0;
	Bfs(start - 1);
	return 0;
}
void Dfs(int p)
{
	int i, su;
	for(i = 0; i < a[p].size(); i++)
	{
		su = a[p][i];
		if(check[su] == 0)
		{
			printf(" %d",su + 1);
			check[su] = 1;
			Dfs(su);
		}
	}
}
void Bfs (int start)
{
	int i, j, su;
	int head, tail, inc;
	int b[1000];
	head = 0; 
	tail = 0;
	b[0] = start;
	check[start] = 1;
	printf("%d",start + 1);
	for(;;)
	{
		inc = tail;
		for(i = head; i <= tail; i++)
		{
			for(j = 0; j < a[b[i]].size(); j++)
			{
				su = a[b[i]][j];
				if(check[su] == 0)
				{
					printf(" %d",su + 1);
					check[su] = 1;
					inc = inc + 1;
					b[inc] = su;
				}
			}
		}
		if(inc == tail)break;
		head = tail + 1;
		tail = inc;
	}
	printf("\n");
}