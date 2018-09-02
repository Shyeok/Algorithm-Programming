#include<stdio.h>
int main()
{
	int i, j;
	int n;
	scanf("%d",&n);
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= i - 1; j++)printf(" ");
		for(j = 1; j <= 2 * n - (i - 1) * 2 - 1; j++)printf("*");
		printf("\n");
	}
	return 0;
}