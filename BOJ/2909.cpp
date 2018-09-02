#include<stdio.h>
int n, m;
int main()
{
	int i, help = 1, dap;
	scanf("%d %d",&n,&m);
	for(i=1;i<=m;i++)
	{
		help = help * 10;
	}
	if(n%help < help/2)
	{
		dap = n - n%help;
	}
	else
	{
		dap = n - n%help + help;
	}
	printf("%d",dap);
	return 0;
}