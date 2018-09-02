#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int i, j;
	int t, n;
	int a[30], dap[100];
	scanf("%d",&t);
	for(i = 0; i < t; i++)
	{
		scanf("%d",&n);
		for(j = 0; j < n; j++)
		{
			scanf("%d",&a[j]);
		}
		sort(a,a+n);
		dap[i] = (a[n / 2] - a[0]) * 2 + (a[n - 1] - a[n / 2]) * 2;
	}
	for(i = 0; i < t; i++)
	{
		printf("%d\n",dap[i]);
	}
	return 0;
}
