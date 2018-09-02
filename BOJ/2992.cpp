#include<stdio.h>
int n;
int check[2][10];
int hello(int a, int b)
{
	for(;;)
	{
		if(a == 0)break;
		check[b][a%10] = check[b][a%10] + 1;
		a = a / 10;
	}
	return 0;
}
int clean(int a)
{
	int i;
	for(i = 0; i <= 9; i++)check[a][i] = 0;
	return 0;
}
int main()
{
	int i, j;
	int ok = 0;
	scanf("%d",&n);
	hello(n,0);
	for(i = n + 1;i <= 999999;i++)
	{
		hello(i,1);  ok = 1;
		for(j = 0; j <= 9; j++)
		{
			if(check[0][j] != check[1][j])
			{
				ok = 0;
				break;
			}
		}
		clean(1);
		if(ok == 1)break;
	}
	if(ok == 1)printf("%d\n",i);
	else printf("0\n");
	return 0;
}