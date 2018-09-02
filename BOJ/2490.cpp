#include<stdio.h>
int main()
{
	int i, j,  a[3];
	int n;
	for(i = 0; i < 3; i++)
	{
		a[i] = 0;
		for(j = 0; j < 4; j++)
		{
			scanf("%d",&n);
			if(n == 0)a[i] = a[i] + 1;
		}
	}
	for(i = 0; i < 3; i++)
	{
		if(a[i] == 0)printf("E\n");
		if(a[i] == 1)printf("A\n");
		if(a[i] == 2)printf("B\n");
		if(a[i] == 3)printf("C\n");
		if(a[i] == 4)printf("D\n");
	}
	return 0;
}