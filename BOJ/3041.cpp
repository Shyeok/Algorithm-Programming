#include<stdio.h>
int p[25][3];
int c_p[25][3], dap;
int distance(int a, int b)
{
	if(a > b)return a - b;
	else return b - a;
}
int main()
{
	int i, j, cnt;
	char hello;
	cnt = 0;
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			scanf("%c",&hello);
			if(hello <= 'O' && hello >= 'A')
			{
				p[hello - 'A'][1] = i;
				p[hello - 'A'][2] = j;
			}
			c_p[cnt][1] = i; c_p[cnt][2] = j;
			cnt = cnt + 1;
		}
		getchar();
	}
	for(i = 'A' - 'A'; i <= 'O' - 'A'; i++)
	{
		dap = dap + distance(c_p[i][1],p[i][1]); 
		dap = dap + distance(c_p[i][2],p[i][2]); 
	}
	printf("%d\n",dap);
	return 0;
}