#include<stdio.h>
#include<map>
using namespace std;
int n, m, su, cnt_0, cnt_1;
int a[600000], b[600000][2];
int main()
{
	int i, j;
	map<int, int> check;
	scanf("%d%d",&n,&m);
	cnt_0 = -1; 
	for(i = 0; i < n; i++)
	{
		scanf("%d",&su);
		cnt_1 = -1;
		for(j = 0; j <= cnt_0; j++)
		{
			cnt_1 = cnt_1 + 1;
			b[cnt_1][0] = a[j] + su;
			b[cnt_1][1] = check[a[j]];
		}
		cnt_1 = cnt_1 + 1;
		b[cnt_1][0] = su;
		b[cnt_1][1] = 1;
		for(j = 0; j <= cnt_1; j++)
		{
			if(check[b[j][0]] == 0)
			{
				cnt_0 = cnt_0 + 1;
				a[cnt_0] = b[j][0];
			}
			check[b[j][0]] = check[b[j][0]] + b[j][1];
		}
	}
	printf("%d\n",check[m]);
	return 0;
}