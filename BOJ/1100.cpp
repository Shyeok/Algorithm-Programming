#include<stdio.h>
char table[10][10];
int main()
{
	int i, j, cnt;
	int dap = 0;
	cnt = 0;
	for(i=0;i<8;i++)
	{
		scanf("%s",table[i]);
		getchar();
		for(j=0;j<8;j++)
		{
			if((i+j+1)%2 == 1 && table[i][j] == 'F')
			{
				dap = dap + 1;
			}
		}
	}
	printf("%d",dap);
	return 0;
}