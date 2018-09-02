#include<stdio.h>
int table[10][10];
int main()
{
	int i, j;
	int max, max_x, max_y;
	max = 0;
	for(i = 1; i <= 9; i++)
	{
		for(j = 1; j <= 9; j++)
		{
			scanf("%d",&table[i][j]);
			if(max < table[i][j])
			{
				max = table[i][j];
				max_x = i;
				max_y = j;
			}
		}
	}
	printf("%d\n",max);
	printf("%d %d\n",max_x,max_y);
	return 0;
}