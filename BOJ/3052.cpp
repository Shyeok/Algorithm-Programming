#include<stdio.h>
int a[50];
int main()
{
	int i;
	int su, n;
	n = 0;
	for(i = 0; i < 10; i++)
	{
		scanf("%d",&su);
		if(a[su % 42] == 0)
		{
			n = n + 1;
			a[su % 42] = 1;
		}
	}
	printf("%d\n",n);
	return 0;
}