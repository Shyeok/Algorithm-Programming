#include <stdio.h>
int A[8];
int main()
{
	int i, j;
	int dap, min;
	for(i=1;i<=7;i++)
	{
		scanf("%d",&A[i]);
	}
	min = 100;
	dap = 0;
	for(i=1;i<=7;i++)
	{
		if(A[i] % 2 == 1)
		{
			dap = A[i] + dap;
			if(A[i] < min)min = A[i];
		}
	}
	if(dap == 0)
	{
		printf("-1");
	}
	else
	{
		printf("%d\n%d",dap,min);
	}
	return 0;
}