#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	int testcase, n;
	int help;
	int dap, dapcnt;
	scanf("%d",&testcase);
	for(i = 0; i < testcase; i++)
	{
		scanf("%d",&n);
		help = 2;	
		for(;;)
		{
			if(n / help == 0)break;
			if(n % help == 0)
			{
				dap = help;
				dapcnt = 0;
				for(;;)
				{
					if(n % dap != 0)break;
					dapcnt = dapcnt + 1;
					n = n / dap;
				}
				printf("%d %d\n",dap,dapcnt);
			}
			help = help + 1;
		}
	}
	return 0;
}