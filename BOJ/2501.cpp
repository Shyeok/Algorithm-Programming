#include<stdio.h>
int main()
{
	int i, flag;
	int cnt, n, k;
	scanf("%d%d",&n,&k);
	flag = 0;
	cnt = 0;
	for(i = 1; i <= n; i++)
	{
		if(n % i == 0)
		{
			cnt = cnt + 1;
			if(cnt == k)
			{
				printf("%d\n",i);
				flag = 1;
				break;
			}
		}
	}
	if(flag == 0)printf("0\n");
	return 0;
}