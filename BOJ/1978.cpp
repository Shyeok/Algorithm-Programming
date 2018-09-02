#include<stdio.h>
#include<math.h>
int n, dap;
int A[200];
int main()
{
	int i, j;
	int help, ok;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
	{
		if(A[i] > 3)
		{
			ok = 0;
			help = sqrt((double)A[i]);
			for(j=2;j<=help;j++)
			{
				if(A[i] % j == 0)
				{
					ok = 1;
					break;
				}
			}
			if(ok == 0)dap = dap + 1;
		}
		else if(A[i] != 1)dap = dap + 1;
	}
	printf("%d\n",dap);
	return 0;
}