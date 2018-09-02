#include<stdio.h>
int check[101][101];
int song[101];
int main()
{
	int i, j, k, l;
	int n, m, a, p, b[101], c, d, e;
	int newsong;
	newsong = 0;
	scanf("%d%d",&n,&m);
	for(i = 0; i < m; i++)
	{
		scanf("%d",&a);
		p = 0;
		for(j = 0; j < a; j++)
		{
			scanf("%d",&b[j]);
			if(b[j] == 1)p = 1;
		}
		if(p == 1)
		{
			newsong = newsong + 1;
			for(j = 0; j < a; j++)
			{
				check[b[j]][newsong] = 1;
				song[b[j]] = song[b[j]] + 1;
			}
		}
		else
		{
			for(j = 0; j < a; j++)
			{
				for(k = 0; k < a; k++)
				{
					d = b[j]; e = b[k];
					for(l = 1; l <= newsong; l++)
					{
						if(check[d][l] == 0 && check[e][l] == 1)
						{
							check[d][l] = 1;
							song[d] = song[d] + 1;
						}
						else if(check[d][l] == 1 && check[e][l] == 0)
						{
							check[e][l] = 1;
							song[e] = song[e] + 1;
						}
					}
				}
			}
		}
	}
	for(i = 1; i <= n; i++)
	{
		if(song[i] == newsong)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}