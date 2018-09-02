#include<stdio.h>
#include<algorithm>
int main()
{
	int i, n;
	int a[50];
	double su;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	std::sort(a,a + n);
	su = a[0] * a[n - 1];
	printf("%.lf\n",su);
	return 0;
}