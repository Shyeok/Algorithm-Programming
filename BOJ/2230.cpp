#include<stdio.h>
#include<algorithm>
using namespace std;
int n, m;
double su[100001], dap;
void binary(int a)
{
	int i, j;
	int head, tail, middle;
	double find;
	head = a; tail = n;
	find = su[a] + m;
	for(;;)
	{
		middle = (head + tail)/ 2;
		if(middle == head || middle == tail)break;
		if(find > su[middle])
		{
			head = middle;
		}
		else if(find < su[middle])
		{
			tail = middle;
		}
		else if(find == su[middle])break;
	}
	if(head >= 0 && su[head] - su[a] < 0)find = (su[head] - su[a]) * - 1;
	else find = (su[head] - su[a]);
	if(find >= m && find < dap)dap = find;
	if(su[middle] - su[a] < 0)find = (su[middle] - su[a]) * - 1;
	else find = (su[middle] - su[a]);
	if(find >= m && find < dap)dap = find;
	if(tail < n && su[tail] - su[a] < 0)find = (su[tail] - su[a]) * - 1;
	else find = (su[tail] - su[a]);
	if(find >= m && find < dap)dap = find;
}
int main()
{
	int i, j;
	scanf("%d%d",&n,&m);
	for(i = 0; i < n; i++)
	{
		scanf("%lf",&su[i]);
	}
	sort(su,su+n);
	dap = 3000000000;
	for(i = 0; i < n; i++)
	{
		binary(i);
	}
	printf("%.lf\n",dap);
	return 0;
}