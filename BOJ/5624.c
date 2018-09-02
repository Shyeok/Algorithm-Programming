#include <stdio.h>
int n, cnt[4], input[6001];
int stack[3][800001], check[4][800001];
int count[800001];
int main()
{
	int i, j, m;
	int dap;
	scanf("%d",&n);
	cnt[1] = cnt[2] = 0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		input[i] = m;
		if(check[1][m+400000] == 0)
		{
			check[1][m+400000] = 1;
			cnt[1] = cnt[1] + 1;
			stack[1][cnt[1]] = m;
			for(j=1;j<=cnt[1];j++)
			{
				if(stack[1][j] + m <= 400000 && stack[1][j] + m >= -400000)
				{
					if(check[2][m+400000+stack[1][j]] != 1)
					{
						check[2][m+400000+stack[1][j]] = 1;
						cnt[2]++;
						stack[2][cnt[2]] = m + stack[1][j];
					}
				}
			}
			for(j=1;j<=cnt[2];j++)
			{
				if(stack[2][j] + m <= 400000 && stack[2][j] + m >= -400000)
				{
					if(check[3][m+400000+stack[2][j]] != 1)
					{
						check[3][m+400000+stack[2][j]] = 1;
						count[m+400000+stack[2][j]] = i;
					}
				}
			}
		}
	}
	dap = 0;
	for(i=1;i<=n;i++)
	{
		if(check[3][input[i]+400000] == 1 && count[input[i]+400000] < i)
		{
				dap++;
		}
	}
	printf("%d",dap);
	return 0;
}