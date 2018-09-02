#include<stdio.h>
int n;
double A[100];
int main()
{
	int i, j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf",&A[i]);
	}
	if(A[0] + A[2] == A[1] * 2)
	{
		printf("%.0lf\n", A[n-1] + A[1] - A[0]);
	}
	if(A[0]*A[2] == A[1] * A[1])
	{
		printf("%.0lf\n", A[n-1] * (A[1] / A[0]));
	}
	return 0;
}