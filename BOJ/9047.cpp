#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int i, j;
	int n;
	char str[5];
	int su1, su2, su3;
	int dap;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		getchar();
		su1 = 0;
		for(j = 0; j < 4; j++)
		{
			scanf("%c",&str[j]);
			su1 = su1 * 10;
			su1 = su1 + int(str[j] - '0');
		}
		if(su1 == 6174)
		{
			dap = 0;
		}
		else
		{
			dap = 1;
			for(;;)
			{
				su1 = 0;
				su2 = 0;
			sort(str,str+4);
			for(j = 3; j >= 0; j--)
			{
				su1 = su1 * 10;
				su1 = su1 + int(str[j] - '0');
			}
			for(j = 0; j < 4; j++)
			{
				su2 = su2 * 10;
				su2 = su2 + int(str[j] - '0');
			}
			su3 = su1 - su2;
			if(su3 == 6174)
			{
				break;
			}
			dap = dap + 1;
			for(j = 3; j >= 0; j--)
			{
				str[j] = char((su3%10) + '0');
				su3 = su3 / 10;
			}
		}
		}
		printf("%d\n",dap);
	}
	return 0;
}