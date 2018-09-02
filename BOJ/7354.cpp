#include<stdio.h>
long long int Sums[25];
long long int Sum[25];
int printX(long long int n, int num)
{
	int i;
	int help = 0, flag = 0;
	int before = 0;
	int lnum, rnum;
	long long int ln, rn;
	for(i = 0; i < num; i++)
	{
		help = help + Sums[i] * Sums[num - 1 - i];
		if(help >= n - Sum[num - 1])break;
		before = before + Sums[i] * Sums[num - 1 - i];
	}
	rnum = num - 1 - i;
	lnum = i;	
	if(lnum != 0)
	{
		printf("(");
		ln = n - Sum[num - 1] - before - 1;
		ln = ln / Sums[rnum];
		ln = ln + 1;
		ln = ln + Sum[lnum - 1];
		printX(ln,lnum);
		printf(")");
	}
	printf("X");
	if(rnum != 0)
	{
		printf("(");	
		rn = n - Sum[num - 1] - before;
		rn = rn % Sums[rnum];
		if(rn == 0)rn = Sums[rnum];
		rn = rn + Sum[rnum - 1];
		printX(rn,rnum);
		printf(")");
	}
	return 0;
}
int main()
{
	int i, j, n, m;
	int num;
	m = 0;
	Sums[0] = 1;
	Sums[1] = 1;
	for(i = 2 ;; i++)
	{
		Sums[i] = 0;
		for(j = 0; j <= i - 1; j++)
		{
			Sums[i] = Sums[i] + Sums[j] * Sums[(i - 1) - j];
		}
		if(Sums[i] >= 500000000)
		{
			break;
		}
		m = m + 1;
	}
	for(i = 1; i <= m + 1; i++)
	{
		Sum[i] = Sum[i - 1] + Sums[i];
	}
	m = m + 1;
	for(;;)
	{
		scanf("%d",&n);
		if(n == 0)break;
		for(i = 1; i <= m; i++)
		{
			if(Sum[i] >= n)
			{
				num = i;
				break;
			}
		}
		printX(n,num);
		printf("\n");
	}
	return 0;
}