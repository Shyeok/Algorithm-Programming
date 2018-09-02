#include<stdio.h>
#include<map>
using namespace std;
int main()
{
	int i, j;
	int n, m, cnt = 0;
	int line[1000], diff[1000];
	int realine[1000], len[1000], daplen = 1;
	map<int,int> check;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d",&line[i]);
		if(check[line[i]] == 0)
		{
			cnt = cnt  + 1;
			diff[cnt - 1] = line[i];
			check[line[i]] = 1;
		}
	}
	for(i = 0; i < cnt; i++)
	{
		m = 0;
		for(j = 0; j < n; j++)
		{
			if(line[j] != diff[i])
			{
				m = m + 1;
				realine[m - 1] = line[j];
			}
			len[j] = 0;
		}
		for(j = 1; j < m; j++)
		{
			if(realine[j] == realine[j - 1])
			{
				len[j] = len[j - 1] + 1;
				if(daplen < len[j] + 1)daplen = len[j] + 1;
			}
			else len[j] = 0;
		}
	}
	printf("%d\n",daplen);
	return 0;
}