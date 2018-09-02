#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d",&a,&b,&c);
	b = b + c;
	a = a + b / 60;
	b = b % 60;
	a = a % 24;
	printf("%d %d\n",a,b);
	return 0;
}