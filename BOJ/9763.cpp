#include<stdio.h>
#define Max 10000
int infor[Max][3], Min[Max][2];
int ABS(int su);
int main()
{
	int i, j, n;
	int dap, Minwho;
	int insidap;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d %d %d",&infor[i][0],&infor[i][1],&infor[i][2]);
		Min[i][0] = 10000;
	}
	dap = 100000;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(i != j)
			{
				insidap = ABS(infor[i][0] - infor[j][0]) + ABS(infor[i][1] - infor[j][1]) + ABS(infor[i][2] - infor[j][2]);
				if(Min[i][0] > insidap)
				{
					Min[i][0] = insidap;
					Min[i][1] = j;
				}
			}
		}
		Minwho = Min[i][1];
		for(j = 0; j < n; j++)
		{
			insidap = ABS(infor[Minwho][0] - infor[j][0]) + ABS(infor[Minwho][1] - infor[j][1]) + ABS(infor[Minwho][2] - infor[j][2]);
			if(i != j && Minwho != j && dap > Min[i][0] + insidap)
			{
				dap = Min[i][0] + insidap;
			}
		}
	}
	printf("%d\n",dap);
	return 0;
}
int ABS(int su)
{
	if(su < 0)return (su * -1);
	else return su;
}