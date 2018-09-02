#include <stdio.h>
int n, order[1001];
int check[3][1001];
int main()
{
	int i, j, cnt ,e;
	int m, save, limit;
	e = cnt = 0;
	scanf("%d %d",&n,&limit);
	for(i=1;i<=n;i ++)
	{
		order[i] = i;
		scanf("%d",&m);
			for(j=1;j<=cnt;j++)
			{
				if(check[0][j] == m)
				{
					check[1][j] = check[1][j] + 1;
					e = 1;
				}
			}
			if(e == 0)
			{
				cnt = cnt + 1;
				check[0][cnt] = m;
				check[1][cnt] = 1;
				check[2][cnt] = cnt;
			}
			e = 0;
	}
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			if(check[1][order[i]] < check[1][order[j]])
			{
				save = order[i];
				order[i] = order[j];
				order[j] = save;
			}
			if(check[1][order[i]] == check[1][order[j]])
			{
				if(check[2][order[i]] > check[2][order[j]])
				{
					save = order[i];
					order[i] = order[j];
					order[j] = save;
				}
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=check[1][order[i]];j++)
		{
			printf("%d ",check[0][order[i]]);
		}
	}
	return 0;
}