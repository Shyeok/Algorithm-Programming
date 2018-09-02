#include<stdio.h>
#include<string.h>
int print[500];
int main()
{
	int i, j;
	char table[500];
	int len, n, p;
	int decide;
	scanf("%s",&table);
	len = strlen(table);
	p = 0; n = 0;
	decide = 0;
	for(;;)
	{
		if(p < 0)break;
		if(table[p] == '.')
		{
			for(;;)
			{
				if(table[p] != '.')break;
				n = n + 1;
				p = p + 1;
				print[n] = 3;
			}
		}
		else 
		{
			decide = 0;
			for(;;)
			{
				if(table[p] == 'X')
				{
					decide = decide + 1;
				}
				else if(table[p] != 'X' )break;
				p = p + 1;
				if(decide == 4)break;
			}
			if(decide == 2)
			{
				n = n + 1;
				print[n] = 2;
			}
			if(decide == 4)
			{
				n = n + 1;
				print[n] = 1;
			}
			if(decide % 2 == 1)p = -1;
			else if(decide % 2 == 0 && p == len)break;
		}
	}
	if(p > 0)
	{
		for(i = 1; i <= n; i++)
		{
			if(print[i] == 1)printf("AAAA");
			else if(print[i] == 2)printf("BB");
			else printf(".");
		}
	}
	else printf("-1");
	printf("\n");
	return 0;
}