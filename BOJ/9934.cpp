#include<stdio.h>
int node[2000];
int tree[11][2000];
int cnt[11];
void findnode(int left, int irght, int depth);
int main()
{
	int i, j;
	int n, m = 1;
	scanf("%d",&n);
	for(i = 0; i < n; i++)m = m * 2;
	m = m - 1;
	for(i = 1; i <= m; i++)
	{
		scanf("%d",&node[i]);
	}	
	findnode(1,m,1);
	for(i = 1 ;; i++)
	{
		if(cnt[i] <= 0)break;
		for(j = 1; j <= cnt[i]; j++)
		{
			printf("%d ",tree[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void findnode(int left, int right, int depth)
{
	int middle;
	cnt[depth] = cnt[depth] + 1;
	middle = left + right;
	middle = middle / 2;
	tree[depth][cnt[depth]] = node[middle];
	if(left != middle)
	{
		findnode(left,middle - 1,depth + 1);
		findnode(middle + 1,right,depth + 1);
	}
}