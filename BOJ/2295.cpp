#include<stdio.h>
#include<algorithm>
#include<map>
#define MAX 1005
using namespace std;
int n;
int arr[MAX];
int main()
{
	int i, j;
	long long int sum, su, dap;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr,arr+n);
	map<long int,int>check;
	for(i = 0; i < n; i++)
	{
		for(j = i; j < n; j++)
		{
			sum = arr[i]  + arr[j];
			check[sum] = 1;
		}
	}
	dap = -1;
	for(i = n - 1; i >= 1; i--)
	{
		for(j = 0; j < i; j++)
		{
			su = arr[i] - arr[j];
			if(check[su] == 1)
			{
				dap = arr[i];
				break;
			}
		}
		if(dap != -1)
		{
			break;
		}
	}
	printf("%ld\n",dap);
	return 0;
}