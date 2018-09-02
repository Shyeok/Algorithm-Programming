#include<stdio.h>
#include<algorithm>
using namespace std;
int su[2000000];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&su[i]);
	}
	sort(su,su+n);
	for(int i = 0; i < n; i++)
	{
		printf("%d\n",su[i]);
	}
	return 0;
}