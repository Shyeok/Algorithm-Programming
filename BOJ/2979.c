#include<stdio.h>
int time[5][100];
int money[5];
int main()
{
	int i, j, start, end;
	int mintime, maxtime, dap;
	scanf("%d %d %d",&money[1],&money[2],&money[3]);
	maxtime = 0;
	mintime = 101;
	for(i=1;i<=3;i++)
	{
		scanf("%d %d",&start,&end);
		end = end - 1;
		if(mintime > start)mintime=start;
		if(maxtime < end)maxtime = end;
		for(j=start;j<=end;j++)
		{
			time[i][j] = 1;
		}
	}
	for(i=mintime;i<=maxtime;i++)
	{
		time[0][i] = time[1][i] + time[2][i] + time[3][i];
	}
	dap = 0;
	for(i=mintime;i<=maxtime;i++)
	{
		dap = dap + money[time[0][i]] * time[0][i];
	}
	printf("%d",dap);
	return 0;
}