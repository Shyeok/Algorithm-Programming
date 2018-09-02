#include<stdio.h>
#include<algorithm>
using namespace std;
int p[10001], check[10001];
int dap;
int main()
{
	int i, j;
	int n;
	int a,b;
	char c;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		getchar();
		scanf("%d%c%d",&a,&c,&b);
		if(b == 2)a = a * 2;
		p[i] = a;
	}
	sort(p,p+n);
	reverse(p,p+n);
	int d;
	for(i = 0; i < n; i++)
	{
		d = 4;
		if(check[i] != 1)
		{
			d = d - p[i];
			check[i] = 1;
			dap = dap + 1;
			for(j = i + 1; j < n; j++)
			{
				if(d >= p[j] && check[j] == 0)
				{
					d = d - p[j];
					check[j] = 1;
				}
				if(d == 0)break;
			}
		}
	}
	printf("%d\n",dap);
	return 0;
}