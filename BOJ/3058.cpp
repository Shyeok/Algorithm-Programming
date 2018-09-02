#include<stdio.h>
int main()
{
	int i, j;
	int testcase;
	int minsu, su, sum;
	scanf("%d",&testcase);
	for(i = 0; i < testcase; i++)
	{
		minsu = -1;
		sum = 0;
		for(j = 0; j < 7; j++)
		{
			scanf("%d",&su);
			if(su % 2 == 0)
			{
				if(minsu == -1)minsu = su;
				if(su < minsu)minsu = su;
				sum = sum + su;
			}
		}
		printf("%d %d\n",sum,minsu);
	}
	return 0;
}