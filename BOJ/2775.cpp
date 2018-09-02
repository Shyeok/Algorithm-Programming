#include<stdio.h>
int apart_people[20][20];
int testcase;
int n, m, dap[1000000];
int main()
{
	int i, j, l;
	for(i=1;i<=14;i++)apart_people[0][i] = i;
	for(i=1;i<=14;i++)
	{
		for(j=1;j<=14;j++)
		{
			for(l=1;l<=j;l++)
			{
				apart_people[i][j] = apart_people[i][j] + apart_people[i - 1][l];
			}
		}
	}
	scanf("%d",&testcase);
	for(i=0;i<testcase;i++)
	{
		scanf("%d %d",&n,&m);
		dap[i] = apart_people[n][m];
	}
	for(i=0;i<testcase;i++)
	{
		printf("%d\n",dap[i]);
	}
	return 0;
}