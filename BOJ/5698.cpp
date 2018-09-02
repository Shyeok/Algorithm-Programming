#include<stdio.h>
int dap[100000];
int main()
{
	int i, j;
	char hi, hello;
	int cnt = 0, ok;
	for(;;)
	{
		scanf("%c",&hi);
		if(hi == '*')break;
		cnt = cnt + 1;
		if(hi >= 'a' && hi <= 'z')hi = hi - 32;
		hello = hi;
		ok = 0;
		for(;;)
		{
			scanf("%c",&hi);
			if(hi == '\n')break;	
			if(hi >= 'a' && hi <= 'z')hi = hi - 32;	
			if(hi == ' ' && ok != 2)ok = 1;
			else if(ok == 1)
			{
				if(hello != hi)ok = 2;
				else ok = 0;
			}
	
		}
		dap[cnt] = ok;
	}
	for(i = 1; i <= cnt; i++)
	{
		if(dap[i] != 2)printf("Y\n");
		else printf("N\n");
	}
	return 0;
}