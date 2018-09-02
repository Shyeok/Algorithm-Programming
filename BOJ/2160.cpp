#include<stdio.h>
char picture[50][5][7];
int comp(int a, int b)
{
	int i, j;
	int diff = 0;
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 7; j++)
		{
			if(picture[a][i][j] !=  picture[b][i][j])diff = diff + 1;
		}
	}
	return  diff;
}
int main()
{	
	int i, j, k;
	int n, result;
	int dap_min, dap_1, dap_2;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < 5; j++)
		{
			getchar();
			for(k = 0; k < 7; k++)
			{
				scanf("%c",&picture[i][j][k]);
			}
		}
	}
	dap_min = 40;
	for(i = 0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			result = comp(i,j);
			if(result < dap_min)
			{
				dap_1 = i + 1; dap_2 = j + 1;
				dap_min = result;
			}
		}
	}
	printf("%d %d\n",dap_1,dap_2);
	return 0;
}