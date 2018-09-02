#include<stdio.h>
long long int tenmulti(int lenght)
{
	long long int i, result;
	result = 1;
	for(i = 0; i < lenght; i++)result = result * 10;
	return result;
}
int main()
{
	long long int su, n;
	long long int arr[100], lenght = 0;
	long long int dap[10], tenmu;
	int i, j, end;
	scanf("%lld",&su);
	for(i = 0; i < 10; i++)dap[i] = 0;
	n = su;
	for(;;)
	{		
		arr[lenght] = n % 10;
		n = n / 10;
		if(n == 0)break;
		lenght = lenght + 1;
	}
	tenmu = tenmulti(lenght);
	for(i = lenght; i >= 1; i--)
	{
		su = su - (arr[i] * tenmulti(i));
		dap[arr[i]] = dap[arr[i]] + (su + 1);
		tenmu = tenmulti(i - 1);
		for(j = 0; j <= 9; j++)
		{
			dap[j] = dap[j] + (tenmu * i) * arr[i];
		}
		tenmu = tenmulti(i);
		if(i == lenght)end = 1;
		else end = 0;
		for(j= arr[i] - 1; j >= end; j--)
		{
			dap[j] = dap[j] + tenmu;
		}
	}
	for(i = lenght - 1; i >=0; i--)
	{
		dap[0] = dap[0] - tenmulti(i);
	}
	if(lenght > 0)end = 0;
	else end = 1;
	for(i = end; i <= arr[0]; i++)dap[i] = dap[i] + 1;
	for(i = 0; i <= 9; i++)printf("%lld ",dap[i]);
	printf("\n");
	return 0;
}