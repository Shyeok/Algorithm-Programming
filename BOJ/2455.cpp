#include<stdio.h>
int main()
{
	int i;
	int a, b, c, max;
	c = 0; max = 0;
	for(i = 0; i < 4; i++)
	{
		scanf("%d%d",&a,&b);
		c = c + b;
		c = c - a;
		if(c > max)max = c;
	}
	printf("%d\n",max);
	return 0;
}