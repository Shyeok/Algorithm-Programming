#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	int su[2000];
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