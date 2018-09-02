#include<stdio.h>
int n;
int A[200000], sum_A[200000];
int findmax(int a, int b)
{
	if(a < b)return b;
	else return a;
}
int main()
{
	int i, dap;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	sum_A[0] = A[0];
	for(i=1;i<n;i++)
	{
		sum_A[i] = findmax(sum_A[i - 1] + A[i], A[i]);
	}
	dap = sum_A[0];
	for(i=0;i<n;i++)
	{
		if(dap < sum_A[i])
		{
			dap = sum_A[i];
		}
	}
	printf("%d\n",dap);
	return 0;
}