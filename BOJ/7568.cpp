#include<stdio.h>
int n, rank[60];
int inf[60][3];
int main()
{
	int i, j;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d %d",&inf[i][0],&inf[i][1]);
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(i != j)
			{
				if(inf[j][0] > inf[i][0] && inf[j][1] > inf[i][1])
				{
					rank[i] = rank[i] + 1;
				}
			}
		}
	}
	for(i = 0; i < n; i++)
	{
		printf("%d ",rank[i] + 1);
	}
	return 0;
}