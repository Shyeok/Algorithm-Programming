#include<stdio.h>
int	check_x[2000], check_y[2000];
int main()
{
	int i, dapx, dapy;
	int x, y;
	for(i = 0; i < 3; i++)
	{
		scanf("%d %d",&x,&y);
		check_x[x] = check_x[x] + 1;
		check_y[y] = check_y[y] + 1;
	}
	for(i = 1; i <= 1000; i++)
	{
		if(check_x[i] % 2 == 1)dapx = i;
		if(check_y[i] % 2 == 1)dapy = i;
	}
	printf("%d %d\n",dapx,dapy);
	return 0;
}