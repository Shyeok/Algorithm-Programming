#include<stdio.h>
#include<algorithm>
#include<map>
using namespace std;
int a[500001];
int b[100000], c[100000];
int main()
{
	int n, m, cnt;
	int i, hi, hello;
	int dap, same;
	scanf("%d%d",&n,&m);
	for(i = 0; i < n / 2; i++)
	{
		scanf("%d%d",&b[i],&c[i]);
	}
	sort(b,b+n/2);
	sort(c,c+n/2);
	cnt = (n / 2) - 1;
	hi = 0;
	for(i = m; i >= 1; i--)
	{
		for(;;)
		{
			if(b[cnt] < i || cnt < 0)break;
			hi = hi + 1;
			cnt = cnt - 1;
		}
		a[i] = hi;
	}
	hi = 0;
	cnt = (n / 2) - 1;
	dap = 1000000;
	same = 0;
	for(i = 1; i <= m; i++)
	{
		for(;;)
		{
			if(c[cnt] < (m - i + 1) || cnt < 0)break;
			hi = hi + 1;
			cnt = cnt - 1;
		}
		a[i] = a[i] + hi;
		if(a[i] < dap)
		{
			dap = a[i];
			same = 1;
		}
		else if(a[i] == dap)
		{
			same = same + 1;
		}
	}
	printf("%d %d\n",dap,same);
	return 0;
}