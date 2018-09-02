#include<stdio.h>
#include<string.h>
char order[100];
int hi[5];
int main()
{
	int i, help, len;
	int dap;
	scanf("%s",&order);
	len = strlen(order);
	hi[1] = 1; hi[2] = 2; hi[3] = 3;
	for(i = 0; i < len; i ++)
	{
		if(order[i] == 'A')
		{
			help = hi[1]; 
			hi[1] = hi[2];
			hi[2] = help;
		}
		if(order[i] == 'B')
		{
			help = hi[2];
			hi[2] = hi[3];
			hi[3] = help;
		}
		if(order[i] == 'C')
		{
			help = hi[1];
			hi[1] = hi[3];
			hi[3] = help;
		}
	}
	for(i=1;i<=3;i++)
	{
		if(hi[i] == 1)
		{
			dap = i;
		}
	}
	printf("%d\n",dap);
	return 0;
}