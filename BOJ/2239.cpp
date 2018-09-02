#include<stdio.h>
int i, j, ok;
int check_1[10][10], check_2[10][10], check_3[10][10];
char table[10][10], dap[10][10];
void fill(int x, int y)
{
	int i, j;
	int next_x, next_y;
	if(x == 9 && y == 0)
	{
		for(i = 0; i < 9; i++)
		{
			for(j = 0; j < 9; j++)
			{
				dap[i][j] =  table[i][j];
			}
		}
		ok = 1;
	}
	else if(ok != 1)
	{
		if(table[x][y] == '0')
		{
			for(i = 1; i <= 9; i++)
			{
				if(check_1[x][i] == 0 && check_2[y][i] == 0 && check_3[(x/3)*3 + (y / 3)][i] == 0)
				{
					next_x = 0; next_y = 1;
					if(y == 8){next_x = 1; next_y = -8;}
					check_1[x][i] = 1;
					check_2[y][i] = 1;  check_3[(x/3)*3 + (y / 3)][i] = 1;
					table[x][y] = (char)(i + '0');
					fill(x + next_x,y + next_y);
					table[x][y] = '0';
					check_1[x][i] = 0;
					check_2[y][i] = 0;  check_3[(x/3)*3 + (y / 3)][i] = 0;
				}
			}
		}
		else
		{
			next_x = 0; next_y = 1;
			if(y == 8){next_x = 1; next_y = -8;}
			fill(x + next_x,y + next_y);
		}
	}
}
void input()
{
	int i, j;
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 9; j++)
		{
			scanf("%c",&table[i][j]);
			check_1[i][table[i][j] - '0'] = 1;
			check_2[j][table[i][j] - '0'] = 1;
			check_3[(i / 3) * 3 + (j / 3)][table[i][j] - '0'] = 1; 
		}
		getchar();
	}
}
void output()
{
	int i, j; 
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 9; j++)
		{
			printf("%c",dap[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	input();
	fill(0,0);
	output();
	return 0;
}