#include<stdio.h>
int main()
{
	int i, j;
	int n;
	scanf("%d",&n);
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= i; j++)printf("*");
		for(j = 1; j <= (n - i) * 2; j++)printf(" ");
		for(j = 1; j <= i; j++)printf("*");
		printf("\n");
	}
	for(i = n - 1; i >= 1; i--)
	{
		for(j = 1; j <= i; j++)printf("*");
		for(j = 1; j <= (n - i) * 2; j++)printf(" ");
		for(j = 1; j <= i; j++)printf("*");
		printf("\n");
	}
	return 0;
}