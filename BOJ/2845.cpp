#include<stdio.h>
int main()
{
	int i;
	int l, p;
	int news[5];
	scanf("%d%d",&l,&p);
	for(i = 0; i < 5; i++)
	{
		scanf("%d",&news[i]);
	}
	for(i = 0; i < 5; i++)
	{
		printf("%d ",news[i] - (l * p));
	}
	printf("\n");
	return 0;
}