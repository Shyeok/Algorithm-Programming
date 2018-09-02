#include<stdio.h>
double money[5] = {350.34,230.90,190.55,125.30,180.90};
int main()
{
	int i, j;
	int n, testcase;
	double sum;
	scanf("%d",&testcase);
	for(i = 0; i < testcase; i++)
	{
		sum = 0;
		for(j = 0; j < 5; j++)
		{
			scanf("%d",&n);
			sum = sum + money[j] * n;
		}
		printf("$%.2lf\n",sum);
	}
	return 0;
}