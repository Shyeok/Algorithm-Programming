#include<stdio.h>
int n, m, a, b;
int table[500][500];
int main()
{
	int i, j, k;
	int start , ok, cnt;
	scanf("%d %d",&n,&m);
	scanf("%d %d",&a,&b);
	ok = 1; cnt = 0;
	for(i = 1; i <= n * a; i++)
	{
		if(ok == 1)start = 1;
		else start = b + 1;
		cnt = cnt + 1;
		for(j = start; j <= m * b; j = j + 2*b)
		{
			for(k = 0; k < b; k++)
			{
				table[i][j + k] = 1;
			}
		}
		if(cnt == a)
		{
			ok = ok * -1;
			cnt = 0;
		}
	}
	for(i = 1; i <= n*a; i++)
	{
		for(j = 1; j <= m*b; j++)
		{
			if(table[i][j] == 1)printf("X");
			else printf(".");
		}
		printf("\n");
	}
	return 0;
}