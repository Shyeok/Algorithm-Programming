#include<stdio.h>
#include<string.h>
char J[6][200];
char S[20]; 
int main()
{
	int i, j, n, p;
	char mark;
	scanf("%s",&S);
	n = strlen(S);
	for(i=1;i<=n;i++)
	{
		if(i % 3 == 0)mark = '*';
		else mark = '#';
		p = 3 + 4 * (i - 1);
		J[1][p] = mark;
		J[2][p - 1] = mark; J[2][p + 1] = mark;
		if(J[3][p - 2] != '*')J[3][p - 2] = mark;
		J[3][p + 2] = mark;
		J[3][p] = S[i - 1];
		J[4][p + 1] = mark; J[4][p - 1] = mark;
		J[5][p] = mark;
	}
	for(i = 1; i <= 5; i++)
	{
		for(j = 1; j <= 5 + 4 * ( n - 1); j ++)
		{
			if(J[i][j] == 0)printf(".");
			else printf("%c",J[i][j]);
		}
		printf("\n");
	}
	return 0;
}