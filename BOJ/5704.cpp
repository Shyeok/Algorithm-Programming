#include<stdio.h>
int check[1000], dap[10000];
int main()
{
	int i, hello, cnt;
	char hi;
	cnt = 1; hello = 0;
	for(;;)
	{
		scanf("%c",&hi);
		if(hi == '*')break;
		if(hi == 10)
		{
			if(hello == 26)dap[cnt] = 1;
			cnt = cnt + 1;
			hello = 0;
		}
		else if(hi != ' ')
		{
			if(hi >= 97)hi = hi - 32;
			if(check[hi - 'A'] != cnt)
			{
				hello = hello + 1;
				check[hi - 'A'] = cnt;
			}
		}
	}
	cnt = cnt - 1;
	for(i=1;i<=cnt;i++)
	{
		if(dap[i] == 1)printf("Y\n");
		else printf("N\n");
	}
	return 0;
}