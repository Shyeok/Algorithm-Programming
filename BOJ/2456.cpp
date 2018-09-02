#include<stdio.h>
int score[3][5];
void change(int a, int b)
{
	int i;
	int help;
	for(i = 0; i < 5; i++)
	{
		help = score[a][i];
		score[a][i] = score[b][i];
		score[b][i]= help;
	}
}
int main()
{
	int i, j;
	int n;
	int a, b, c;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		score[0][a - 1]++; 
		score[1][b - 1]++;
		score[2][c - 1]++;
		score[0][3] = score[0][3] + a;
		score[1][3] = score[1][3] + b;
		score[2][3] = score[2][3] + c;
	}
	for(i = 0; i < 3; i++)score[i][4] = i + 1;
	for(i = 0; i < 3; i++)
	{
		for(j = i + 1; j < 3; j++)
		{
			if(score[i][3] < score[j][3])change(i,j);
			else if(score[i][3] == score[j][3])
			{
				if(score[i][2] < score[j][2])change(i,j);
				else if(score[i][2] == score[j][2])
				{
					if(score[i][1] < score[j][1])change(i,j);
					else if(score[i][1] == score[j][1] && score[i][0] < score[j][0])change(i,j);
				}
			}
		}
	}
	if(score[0][0] == score[1][0] && score[0][1] == score[1][1] && score[0][2] == score[1][2] && score[0][3] == score[1][3])printf("0 %d",score[0][3]);
	else printf("%d %d",score[0][4],score[0][3]);
	return 0;
}