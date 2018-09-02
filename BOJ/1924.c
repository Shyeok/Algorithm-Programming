#include<stdio.h>
int contday[15];
int main()
{
	int i, j;
	int m, d, dap;
	contday[1] = contday[3] = contday[5] = contday[7] = contday[8] = contday[10] = contday[12] = 31;
	contday[4] = contday[6] = contday[9] = contday[11] = 30;
	contday[2] = 28;
	scanf("%d %d",&m,&d);
	dap = 0;
	for(i=1;i<=m-1;i++)
	{
		dap = dap + contday[i];
	}
	dap = dap + d;
	if(dap % 7 == 1)printf("MON");
	if(dap % 7 == 2)printf("TUE");
	if(dap % 7 == 3)printf("WED");
	if(dap % 7 == 4)printf("THU");
	if(dap % 7 == 5)printf("FRI");
	if(dap % 7 == 6)printf("SAT");
	if(dap % 7 == 0)printf("SUN");
 	return 0;
}