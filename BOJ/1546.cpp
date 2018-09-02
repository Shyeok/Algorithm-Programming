#include<stdio.h>
int main()
{
	int i, j;
	double n, a[1001];
	double max, sum;
	scanf("%lf",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%lf",&a[i]);
		if(i == 0)max = a[0];
		if(a[i] > max)max = a[i];
	}
	for(i = 0; i < n; i++)a[i] = (a[i] / max) * 100;
	sum = 0;
	for(i = 0;i < n;i++)sum = sum + a[i];
	sum = sum / n;
	printf("%.2lf\n",sum);
	return 0;
}