#include<stdio.h>
#include<algorithm>
int n, dap;
int a[60], b[60];
void input()
{
	int i;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i = 0; i < n; i++)
	{
		scanf("%d",&b[i]);
	}
}
void pro()
{
	int i, j, m;
	std::sort(a,a+n);
	std::sort(b,b+n);
	dap = 0; m = n - 1;
	for(i = 0; i < n; i++)
	{
		dap = dap + a[m] * b[i];
		m = m - 1;
	}
}
void output()
{
	printf("%d\n",dap);
}
int main()
{
	input();
	pro();
	output();
	return 0;
}