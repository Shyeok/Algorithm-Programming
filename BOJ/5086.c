#include<stdio.h>
int dap[10000];
int main()
{
	int i, n, m, cnt;
	cnt = 0;
	for(;;)
	{
		scanf("%d %d",&n,&m);
		if(n == 0)break;
		cnt = cnt + 1;
		if(m%n == 0)dap[cnt] = 1;
		if(n%m == 0)dap[cnt] = 2;
		else if(m%n != 0) dap[cnt] = 3;
	}
	for(i=1;i<=cnt;i++)
	{
		if(dap[i] == 1)printf("factor");
		if(dap[i] == 2)printf("multiple");
		if(dap[i] == 3)printf("neither");
		printf("\n");
	}
}