#include<stdio.h>
int burgar[4], cola[3];
int main()
{
	int i, j;
	int dap;
	for(i = 0; i < 3; i++)scanf("%d",&burgar[i]);
	for(i = 0; i < 2; i++)scanf("%d",&cola[i]);
	dap = burgar[0] + cola[0] - 50;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 2; j++)
		{
			if(dap > burgar[i] + cola[j] - 50)
			{
				dap = burgar[i] + cola[j] - 50;
			}
		}
	}
	printf("%d\n",dap);
	return 0;
}