#include<stdio.h>
int box[101][101][101];
int a[2000000][3];
int main()
{
	int m, n, h;
	int i, j, k;
	int cnt_1, cnt_2;
	int start, end;
	int time = 0, x, y, z;
	cnt_1 = 0; cnt_2 = 0;
	scanf("%d %d %d",&m,&n,&h);
	for(i = 1; i <= h; i++)
	{
		for(j = 1; j <= n; j++)
		{
			for(k = 1; k <= m; k++)
			{
				scanf("%d",&box[i][j][k]);
				if(box[i][j][k] == 1)
				{
					cnt_1 = cnt_1 + 1;
					a[cnt_1][0] = i;
					a[cnt_1][1] = j;
					a[cnt_1][2] = k;
				}
				if(box[i][j][k] != -1)
				{
					cnt_2 = cnt_2 + 1;
				}
			}
		}
	}
	start = 1; end = cnt_1;
	if(cnt_1 == cnt_2)
	{
		printf("0");
	}
	else 
	{
		for(;;)
		{
			time = time + 1;
			for(i = start; i <= end; i++)
			{
				x = a[i][0]; y = a[i][1]; z = a[i][2];
				if(x > 1 && box[x - 1][y][z] == 0)
				{
					box[x - 1][y][z] = 1;
					cnt_1 = cnt_1 + 1;
					a[cnt_1][0] = x - 1; a[cnt_1][1] = y; a[cnt_1][2] = z;
				}
				if(y > 1 && box[x][y - 1][z] == 0)
				{
					box[x][y - 1][z] = 1;
					cnt_1 = cnt_1 + 1;
					a[cnt_1][0] = x; a[cnt_1][1] = y - 1; a[cnt_1][2] = z;
				}
				if(z > 1 && box[x][y][z - 1] == 0)
				{
					box[x][y][z - 1] = 1;
					cnt_1 = cnt_1 + 1;
					a[cnt_1][0] = x; a[cnt_1][1] = y; a[cnt_1][2] = z - 1;
				}
				if(x < h && box[x + 1][y][z] == 0)
				{
					box[x + 1][y][z] = 1;
					cnt_1 = cnt_1 + 1;
					a[cnt_1][0] = x + 1; a[cnt_1][1] = y; a[cnt_1][2] = z;
				}
				if(y < n && box[x][y + 1][z] == 0)
				{
					box[x][y + 1][z] = 1;
					cnt_1 = cnt_1 + 1;
					a[cnt_1][0] = x; a[cnt_1][1] = y + 1; a[cnt_1][2] = z;
				}
				if(z < m && box[x][y][z + 1] == 0)
				{
					box[x][y][z + 1] = 1;
					cnt_1 = cnt_1 + 1;
					a[cnt_1][0] = x; a[cnt_1][1] = y; a[cnt_1][2] = z + 1;
				}
			}
			if(cnt_1 != cnt_2 && cnt_1 == end)
			{
				time = -1;
				break;
			}
			else if(cnt_1 == cnt_2)break;
			start = end + 1;
			end = cnt_1;
		}
		printf("%d\n",time);
	}
	return 0;
}