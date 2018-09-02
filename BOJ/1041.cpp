#include<stdio.h>
long long int  arr[7];
long long int onemin, twomin, threemin;
long long int onemax = 0, sum = 0;
long long int su(long long int a, long long int b)
{
	if(a < b)return a;
	else return b;
}
int main()
{
	int i;
	long long int n;
	long long int dap = 0;
	scanf("%lld",&n);
	scanf("%lld",&arr[0]);
	onemin = arr[0];
	onemax = arr[0];
	sum = onemax;
	for(i = 1; i < 6; i++)
	{
		scanf("%lld",&arr[i]);
		if(onemin > arr[i])onemin = arr[i];
		if(onemax < arr[i])onemax = arr[i];
		sum = sum + arr[i];
	}
	threemin = arr['A' - 'A'] + arr['E' - 'A'] + arr['D' - 'A'];
	threemin = su(threemin, arr['A' - 'A'] + arr['D' - 'A'] + arr['B' - 'A']);
	threemin = su(threemin, arr['A' - 'A'] + arr['B' - 'A'] + arr['C' - 'A']);
	threemin = su(threemin, arr['A' - 'A'] + arr['E' - 'A'] + arr['C' - 'A']);

	threemin = su(threemin, arr['B' - 'A'] + arr['A' - 'A'] + arr['D' - 'A']);
	threemin = su(threemin, arr['B' - 'A'] + arr['D' - 'A'] + arr['F' - 'A']);
	threemin = su(threemin, arr['B' - 'A'] + arr['F' - 'A'] + arr['C' - 'A']);
	threemin = su(threemin, arr['B' - 'A'] + arr['C' - 'A'] + arr['A' - 'A']);

	threemin = su(threemin, arr['C' - 'A'] + arr['A' - 'A'] + arr['B' - 'A']);
	threemin = su(threemin, arr['C' - 'A'] + arr['B' - 'A'] + arr['F' - 'A']);
	threemin = su(threemin, arr['C' - 'A'] + arr['F' - 'A'] + arr['E' - 'A']);
	threemin = su(threemin, arr['C' - 'A'] + arr['E' - 'A'] + arr['A' - 'A']);

	threemin = su(threemin, arr['D' - 'A'] + arr['A' - 'A'] + arr['B' - 'A']);
	threemin = su(threemin, arr['D' - 'A'] + arr['B' - 'A'] + arr['F' - 'A']);
	threemin = su(threemin, arr['D' - 'A'] + arr['F' - 'A'] + arr['E' - 'A']);
	threemin = su(threemin, arr['D' - 'A'] + arr['E' - 'A'] + arr['A' - 'A']);

	threemin = su(threemin, arr['E' - 'A'] + arr['A' - 'A'] + arr['D' - 'A']);
	threemin = su(threemin, arr['E' - 'A'] + arr['D' - 'A'] + arr['F' - 'A']);
	threemin = su(threemin, arr['E' - 'A'] + arr['F' - 'A'] + arr['C' - 'A']);
	threemin = su(threemin, arr['E' - 'A'] + arr['C' - 'A'] + arr['A' - 'A']);

	threemin = su(threemin, arr['F' - 'A'] + arr['E' - 'A'] + arr['D' - 'A']);
	threemin = su(threemin, arr['F' - 'A'] + arr['D' - 'A'] + arr['B' - 'A']);
	threemin = su(threemin, arr['F' - 'A'] + arr['B' - 'A'] + arr['C' - 'A']);
	threemin = su(threemin, arr['F' - 'A'] + arr['E' - 'A'] + arr['C' - 'A']);

	twomin = arr['A' - 'A'] + arr['C' - 'A'];
	twomin = su(twomin,arr['A' - 'A'] + arr['B' - 'A']);
	twomin = su(twomin,arr['A' - 'A'] + arr['D' - 'A']);
	twomin = su(twomin,arr['A' - 'A'] + arr['E' - 'A']);

	twomin = su(twomin,arr['B' - 'A'] + arr['A' - 'A']);
	twomin = su(twomin,arr['B' - 'A'] + arr['D' - 'A']);
	twomin = su(twomin,arr['B' - 'A'] + arr['F' - 'A']);
	twomin = su(twomin,arr['B' - 'A'] + arr['C' - 'A']);

	twomin = su(twomin,arr['C' - 'A'] + arr['A' - 'A']);
	twomin = su(twomin,arr['C' - 'A'] + arr['E' - 'A']);
	twomin = su(twomin,arr['C' - 'A'] + arr['F' - 'A']);
	twomin = su(twomin,arr['C' - 'A'] + arr['B' - 'A']);

	twomin = su(twomin,arr['D' - 'A'] + arr['A' - 'A']);
	twomin = su(twomin,arr['D' - 'A'] + arr['E' - 'A']);
	twomin = su(twomin,arr['D' - 'A'] + arr['F' - 'A']);
	twomin = su(twomin,arr['D' - 'A'] + arr['B' - 'A']);

	twomin = su(twomin,arr['E' - 'A'] + arr['A' - 'A']);
	twomin = su(twomin,arr['E' - 'A'] + arr['D' - 'A']);
	twomin = su(twomin,arr['E' - 'A'] + arr['F' - 'A']);
	twomin = su(twomin,arr['E' - 'A'] + arr['C' - 'A']);

	twomin = su(twomin,arr['F' - 'A'] + arr['C' - 'A']);
	twomin = su(twomin,arr['F' - 'A'] + arr['B' - 'A']);
	twomin = su(twomin,arr['F' - 'A'] + arr['D' - 'A']);
	twomin = su(twomin,arr['F' - 'A'] + arr['E' - 'A']);

	if(n != 1)
	{
		dap = threemin * 4;
		dap = dap + (n * 8 - 12) * twomin;
		dap = dap + (n - 2) * (n - 2) * onemin + (n - 1) * (n - 2) * 4 * onemin;
	}
	else
	{
		dap =sum - onemax;
	}
	printf("%lld\n",dap);
	return 0;
}