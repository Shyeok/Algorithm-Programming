#include<stdio.h>
int main()
{
	int i, j;
	int a[10];
	int x, y, sum;
	sum = 0;
	for(i = 0; i < 9; i++)
	{
		scanf("%d",&a[i]);
		sum = sum  + a[i];
	}
	for(i = 0; i < 8; i++)
	{
		for(j = i + 1; j < 9; j++)
		{
			if(sum - a[i] - a[j] == 100)
			{
				x = i; y = j;
				break;
			}
		}
	}
	for(i = 0; i < 9; i++)
	{
		if(i != x && i != y)
		{
			printf("%d\n",a[i]);
		}
	}
	return 0;
}