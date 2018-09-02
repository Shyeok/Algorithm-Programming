#include<stdio.h>
int dap[100000][35];
int cnt[3][100000];
int main()
{
	int i, j, n=1;
	int help1, help2; 
	char who;
	for(;;)
	{
		scanf("%c",&who);
		if(who == '#')break;
		if(who == 'e')
		{
			if(cnt[2][n] %  2 == 0)dap[n][cnt[1][n] + 1] = 0;
			else dap[n][cnt[1][n] + 1] = 1;
			n = n+ 1;
		}
		else if(who == 'o')
		{
			if(cnt[2][n] % 2 == 1)dap[n][cnt[1][n] + 1] = 0;
			else dap[n][cnt[1][n] + 1] = 1;
			n = n + 1;
		}
		if(who == '1')
		{
			cnt[1][n] ++;
			cnt[2][n] ++;
			dap[n][cnt[1][n]] = 1;
		}
		if(who == '0')
		{
			cnt[1][n] ++;
			dap[n][cnt[1][n]] = 0;
		}
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=cnt[1][i]+1;j++)
		{
			printf("%d",dap[i][j]);
		}
		printf("\n");
	}
	return 0;
}