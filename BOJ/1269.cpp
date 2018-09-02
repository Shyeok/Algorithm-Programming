#include<stdio.h>
#include<algorithm>
int n, m;
int a[300000], b[300000];
int main()
{
	int i, right, left;
	int middle, dap;
	scanf("%d %d",&n,&m);
	for(i = 0; i < n; i++)scanf("%d",&a[i]);
	for(i = 0; i < m; i++)scanf("%d",&b[i]);
	std::sort(b,b + m);
	dap = 0;
	for(i = 0; i < n;i++)
	{
		right = 0; left = m - 1;
		for(;;)
		{
			middle = (right + left) * 0.5;
			if(a[i] == b[middle] || a[i] == b[right] || a[i] == b[left])
			{
				dap = dap + 1;
				break;
			}
			else
			{
				if(middle == left || middle == right)break;
				else if(a[i] < b[middle])left = middle;
				else if(a[i] > b[middle])right = middle;
			}
		}
	}
	dap = n + m - dap * 2;
	printf("%d\n",dap);
	return 0;
}