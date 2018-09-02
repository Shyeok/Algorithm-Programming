#include<stdio.h>
int max(int a,int b)
{
	if(a > b)return a;
	else return b;
}
int main()
{
	int i, j;
	int n, dap;
	int st[300], point[300][2];
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d",&st[i]);
		point[i][0] = 0;
		point[i][1] = 0;
	}
	point[0][0] = st[0];
	if(n >= 2)
	{
		point[1][0] = st[1];
		point[1][1] = st[1] + st[0];
	}
	for(i = 2; i < n; i++)
	{
		point[i][0] = max(point[i - 2][0],point[i - 2][1]) + st[i];
		point[i][1] = point[i - 1][0] + st[i];
	}
	dap = max(point[n - 1][0],point[n - 1][1]);
	printf("%d\n",dap);
	return 0;
}