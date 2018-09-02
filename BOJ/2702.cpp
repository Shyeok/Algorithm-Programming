#include<stdio.h>
int help(int a, int b)
{
	int temp;
	int c;
	for(;;)
	{
		if(a < b)
		{
			temp = a;
			a = b;
			b = temp;
		}
		if(a % b == 0)break;
		c = a % b;
		a = b;
		b = c;
	}
	return b;
}
int main()
{
	int i, j;
	int t, n, m;
	int a[1001][3];
	int hi, hello;
	scanf("%d",&t);
	for(i = 0; i < t; i++)
	{
		scanf("%d %d",&n,&m);
		hi = help(n,m);
		hello = n * m / hi;
		a[i][0] = hello;
		a[i][1] = hi;
	}
	for(i = 0; i < t; i++)
	{
		printf("%d %d\n",a[i][0],a[i][1]);
	}
	return 0;
}