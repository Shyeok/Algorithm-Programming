#include<stdio.h>
int number, cnt_check[10], dap[100000];
int testcase;
int main()
{
	int i, j;
	scanf("%d",&testcase);
	for(i=0;i<testcase;i++)
	{
		scanf("%d",&number);
		for(;;)
		{
			if(number == 0)break;
			if(cnt_check[number % 10] == 0)
			{
				dap[i] = dap[i] + 1;
			}
			cnt_check[number % 10] = 1;
			number = number / 10;
		}
		for(j=0;j<=9;j++)cnt_check[j] = 0 ;
	}
	for(i=0;i<testcase;i++)
	{
		printf("%d\n",dap[i]);
	}
	return 0;
}