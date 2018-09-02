#include<stdio.h>
int find(int, int);
int main()
{
	int i, j;
	int a, b, c;
	scanf("%d%d",&a,&b);
	c = find(a,b);
	printf("%d\n%d\n",c,a * b / c);
	return 0;
}
int find(int a,int b)
{
	int c;
	if(a < b)
	{
		c = a;
		a = b;
		b = c;
	}
	for(;;)
	{
		if(a % b == 0)break;
		c = a % b;
		a = b;
		b = c;
	}
	return b;
}