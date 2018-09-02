#include<stdio.h>
#include<algorithm>
#include<map>
#define Max 10000000
#define scnt 700000
using namespace std;
bool scheck[Max];
int sum[scnt];
int sosu[scnt];
int sums[10][scnt];
int len[10];
int binary(int findsu, int who);
int main()
{
	int i, j, k, cnt = 0;
	int testcase, n, m;
	int flag = 0, arr[10];
	int spsum, help, dap;
	scheck[0] = true;
	scheck[1] = true;
	for(i = 2; i * i <= Max; i++)
	{
		if(scheck[i] == false)
		{
			for(j = i + i; j <= Max; j = j + i)
			{
				scheck[j] = true;
			}
		}
	}
	sum[0] = 0;
	for(i = 2; i <= Max; i++)
	{
		if(scheck[i] == false)
		{
			cnt = cnt + 1;
			sum[cnt] = sum[cnt - 1] + i;
		}
	}
	scanf("%d",&testcase);
	for(k = 0; k < testcase; k++)
	{
		scanf("%d",&n);
		for(i = 0; i < n; i++)
		{
			scanf("%d",&arr[i]);
		}
		sort(arr,arr+n);
		for(i = 0; i < n; i++)
		{
			len[i] = 0;
			for(j = arr[i]; j <= cnt; j++)
			{
				sums[i][len[i]] = sum[j] - sum[j - arr[i]];
				len[i] = len[i] + 1;
			}
		}
		for(i = 0; i < len[n - 1]; i++)
		{
			flag = 0;
			if(scheck[sums[n - 1][i]] == false)
			{
				for(j = 0; j < n - 1; j++)
				{
					flag = binary(sums[n - 1][i], j);
					if(flag == 1)break;
				}
				if(flag == 0)
				{
					dap = sums[n - 1][i];
					break;
				}
			}
		}
		printf("Scenario %d:\n%d\n\n",k + 1,dap);

	}
	return 0;
}
int binary(int findsu, int who)
{
	int i, j;
	int left, right, middle;
	left = 0; right = len[who];
	for(;;)
	{
		middle = (left + right) / 2;
		if(sums[who][middle] == findsu)break;
		if(left >= right)break;
		if(left == middle || right == middle)break;
		if(findsu > sums[who][middle])
		{
			left = middle;
		}
		if(findsu < sums[who][middle])
		{
			right = middle;
		}
	}
	if(findsu == sums[who][middle])return 0;
	else return 1;
}