#include<stdio.h>
#include<math.h>
int n;
int Su[100];
int main()
{
	int i, j, save_su;
	int ok, len, back, dap;
	scanf("%d",&n);
	for(i = n;; i++)
	{
		ok = 0;
		for(j = 2; j <= (int)sqrt((double)i); j ++)
		{
			if(i % j == 0)
			{
				ok = 1;
				break;
			}
		}
		if(i == 1)ok = 1;
		if(ok != 1)
		{
			len = 0; save_su = i;
			for(;;)
			{
				if(save_su == 0)break;
				len = len + 1;
				Su[len] = save_su % 10;
				save_su = save_su / 10;
			}
			back = len; ok = 0;
			for(j = 1; j <= (len + 1) * 0.5; j++)
			{
				if(Su[j] != Su[back])
				{
					ok = 1;
					break;
				}
				back = back - 1;
			}
			if(ok != 1)
			{
				dap = i;
				break;
			}
		}
	}
	printf("%d\n",dap);
	return 0;
}
