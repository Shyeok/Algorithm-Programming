#include<stdio.h>
int main()
{
	int a, b, c;
	int d, help;
	scanf("%d %d %d",&a,&b,&c);
	scanf("%d",&d);
	help = a * 3600;
	help = help + b * 60;
	help = help + c;
	help = help + d;
	a = help / 3600;
	help = help % 3600;
	b = help / 60;
	help = help % 60;
	c = help;
	a = a % 24;
	printf("%d %d %d\n",a,b,c);
	return 0;
}