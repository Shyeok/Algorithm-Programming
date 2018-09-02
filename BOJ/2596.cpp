#include<stdio.h>
int main()
{
	int i, j, k, n, ok;
	char letter[1000];;
	int sletter[100][10];
	int diff, check = 0, mindiff;
	char s[1000];
	sletter[0][0] = 0; sletter[0][1] = 0; sletter[0][2] = 0; sletter[0][3] = 0; sletter[0][4] = 0; sletter[0][5] = 0;
	sletter[1][0] = 0; sletter[1][1] = 0; sletter[1][2] = 1; sletter[1][3] = 1; sletter[1][4] = 1; sletter[1][5] = 1;
    sletter[2][0] = 0; sletter[2][1] = 1; sletter[2][2] = 0; sletter[2][3] = 0; sletter[2][4] = 1; sletter[2][5] = 1;
    sletter[3][0] = 0; sletter[3][1] = 1; sletter[3][2] = 1; sletter[3][3] = 1; sletter[3][4] = 0; sletter[3][5] = 0;
	sletter[4][0] = 1; sletter[4][1] = 0; sletter[4][2] = 0; sletter[4][3] = 1; sletter[4][4] = 1; sletter[4][5] = 0;
    sletter[5][0] = 1; sletter[5][1] = 0; sletter[5][2] = 1; sletter[5][3] = 0; sletter[5][4] = 0; sletter[5][5] = 1;
    sletter[6][0] = 1; sletter[6][1] = 1; sletter[6][2] = 0; sletter[6][3] = 1; sletter[6][4] = 0; sletter[6][5] = 1;
	sletter[7][0] = 1; sletter[7][1] = 1; sletter[7][2] = 1; sletter[7][3] = 0; sletter[7][4] = 1; sletter[7][5] = 0;
	ok = 0;
	scanf("%d",&n);
	getchar();
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < 6; j++)
		{
			scanf("%c",&letter[j]);
		}
		mindiff = 99999;
		for(j = 0; j < 8; j++)
		{
			diff = 0;
			for(k = 0; k < 6; k++)
			{
				if(sletter[j][k] != (int)(letter[k] - '0'))
				{
					diff = diff + 1;
				}
			}
			if(diff <= mindiff)
			{
				mindiff = diff;
				check = j;
			}
		}
		if(mindiff <= 1)
		{
			s[i] = (char)(check + 'A');
		}
		else{ok = i + 1; break;}
	}
	if(ok == 0)
	{
		for(i = 0; i < n; i++)
		{
			printf("%c",s[i]);
		}
	}
	else printf("%d",ok);
	printf("\n");
	return 0;
}