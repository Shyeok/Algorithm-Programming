#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d%d",&a,&b);
	printf("%d\n%d\n%d\n%d\n",a*(b%10),a*((b/10)%10),a*(b/100),a*b);
	return 0;
}