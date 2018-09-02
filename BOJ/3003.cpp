#include<stdio.h>
int main()
{
	int i;
	int a[6] = {1,1,2,2,2,8};
	int b[6];
	for(i = 0; i < 6; i++)
	{
		scanf("%d",&b[i]);
	}
	for(i = 0; i < 6; i++)
	{
		printf("%d ",a[i] - b[i]);
	}
	printf("\n");
	return 0;
}