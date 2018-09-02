#include<stdio.h>
#define Max 1001
int book[Max][3];
int check[Max];
void swap(int &a, int &b);
int main()
{
	int j, k;
	int testcase, n, m;
	int temp, dap;
	scanf("%d",&testcase);
	for(;;)
	{
		if(testcase == 0)break;
		scanf("%d %d",&n,&m);
		for(j = 0; j < m; j++)
		{
			scanf("%d %d",&book[j][0],&book[j][1]);
			book[j][2] = book[j][1] - book[j][0];
		}
		for(j = 0; j < m; j++)
		{
			for(k = j + 1; k < m; k++)
			{
				if(book[j][1] > book[k][1])
				{
					swap(book[j][0],book[k][0]);
					swap(book[j][1],book[k][1]);
					swap(book[j][2],book[k][2]);
				}
			}
		}
		dap = 0;
		for(j = 0; j < m; j++)
		{
			for(k = book[j][0]; k <= book[j][1]; k++)
			{
				if(check[k - 1] == 0)
				{
					check[k - 1] = 1;
					dap = dap + 1;
					break;
				}
			}
		}
		for(j = 0; j < n; j++)check[j] = 0;
		printf("%d\n",dap);
		testcase = testcase - 1;
	}
	return 0;
}
void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}