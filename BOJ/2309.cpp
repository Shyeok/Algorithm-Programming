#include<stdio.h>
#include<algorithm>
int main()
{
	int i, j;
	int tall[9], sum;
	int a, b;
	sum = 0;
	for(i = 0; i < 9; i++)
	{
		scanf("%d",&tall[i]);
		sum = sum + tall[i];
	}
	std::sort(tall,tall + 9);
	for(i = 0; i < 9; i++)
	{
		for(j = i + 1; j < 9; j++)
		{
			if(sum - tall[i] - tall[j] == 100)
			{
				a = i;
				b = j;
			}
		}
	}
	for(i = 0; i < 9; i++)
	{
		if(i != a && i != b)
		{
			printf("%d\n",tall[i]);
		}
	}
	return 0;
}