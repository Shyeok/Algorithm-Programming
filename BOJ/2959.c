#include<stdio.h>
int len[5];
int main()
{
	int i, j, help;
	int dap;
	scanf("%d %d %d %d",&len[1],&len[2],&len[3],&len[4]);
	for(i=1;i<=3;i++)
	{
		for(j=i+1;j<=4;j++)
		{
			if(len[i] > len[j])
			{
				help = len[i];
				len[i] = len[j];
				len[j] = help;
			}
		}
	}
	dap = 0;
	if(dap < len[1]*len[2]){dap = len[1]*len[2];}
	if(dap < len[1]*len[3]){dap = len[1]*len[3];}
	printf("%d",dap);
	return 0;
}