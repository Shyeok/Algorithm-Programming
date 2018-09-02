#include<stdio.h>
int n;
int dap[3][1001];
int main()
{
	int i, m, cnt;
	scanf("%d",&n);
	cnt = 0;
	for(;;)
	{
		scanf("%d",&m);
		if(m == 0)break;
		cnt ++;
		dap[1][cnt] = m;
		dap[2][cnt] = m%n;
	}
	for(i=1;i<=cnt;i++)
	{
		if(dap[2][i] == 0)
		{
			printf("%d is a multiple of %d.\n",dap[1][i],n);
		}
		else
		{
			printf("%d is NOT a multiple of %d.\n",dap[1][i],n);
		}
	}
	return 0;
}