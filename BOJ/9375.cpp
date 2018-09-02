#include<stdio.h>
#include<algorithm>
#include<map>
#include<string>
using namespace std;
int m[31];
int main()
{
	int i, j;
	int testcase, n;
	int len = 0, dap = 0;
	char str1[31], str2[31];
	scanf("%d",&testcase);
	for(;;)
	{
		scanf("%d",&n);
		testcase = testcase - 1;
		len = 0;
		map<string,int>name;
		for(i = 1; i <= n; i++)
		{
			m[i] = 0;
		}
		for(i = 0; i < n; i++)
		{
			getchar();
			scanf("%s",str1);
			scanf("%s",str2);
			if(name[str2] == 0)
			{
				len = len + 1;
				name[str2] = len;
			}
			m[name[str2]] = m[name[str2]] + 1;
		}
		dap = 1;
		for(i = 1; i <= len; i++)
		{
			dap = dap * (m[i] + 1);
		}
		dap = dap - 1;
		printf("%d\n",dap);
		if(testcase == 0)break;
	}
	return 0;
}