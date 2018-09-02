#include<stdio.h>
int n, A[10001];
long long int m;
int main()
{
	int i, dap, ok, start;
	long long int sum;
	sum = dap = 0;
	scanf("%d %d",&n,&m);
	start = 1;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&A[i]);
		if(sum + A[i] == m)
		{
			dap = dap + 1;
			sum = sum + A[i];
		}
		else if(sum + A[i] > m)
		{
			ok = 0;
			while(ok == 0)
			{
				if(sum + A[i] <= m){ok = 1;}
				else
				{
					sum = sum - A[start];
					start = start + 1;
				}
			}
			sum = sum + A[i];
			if(sum == m){dap = dap + 1;}
		}
		else{sum = sum + A[i];}
	}
	printf("%d",dap);
	return 0;
}