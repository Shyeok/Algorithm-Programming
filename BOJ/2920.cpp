#include<stdio.h>
int main()
{
	int i, j;
	int a, b, flag;
	a = 0; b = 0;
	flag = 0;
	for(i = 0; i < 8; i++)
	{
		scanf("%d",&b);
		if(a == 0)
		{
			if(b == 1)flag = 1;
			else if(b == 8)flag = 2;
			else flag = 3;
		}
		else
		{
			if(flag == 1 && b - a == 1)flag = 1;
			else if(flag == 2 && a - b == 1)flag = 2;
			else flag = 3;
		}
		a = b; 
		if(flag == 3)break;
	}
	if(flag == 1)printf("ascending\n");
	else if(flag == 2)printf("descending\n");
	else printf("mixed\n");
	return 0;
}