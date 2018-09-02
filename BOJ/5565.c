#include<stdio.h>
int sum;
int main()
{
	int i, money, dap;
	scanf("%d",&sum);
	for(i=1;i<=9;i++)
	{
		scanf("%d",&money);
		sum=sum-money;
	}
	dap = sum;
	printf("%d",dap);
	return 0;
}