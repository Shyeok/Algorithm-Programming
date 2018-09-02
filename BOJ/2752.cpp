#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int su[3];
	scanf("%d%d%d",&su[0],&su[1],&su[2]);
	sort(su,su+3);
	for(int i = 0; i < 3; i++)
	{
		printf("%d ",su[i]);
	}
	printf("\n");
	return 0;
}