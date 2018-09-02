#include<stdio.h>
int main()
{
	int i, j;
	int testcase, n, sum;
	char str[1011];
	int check['Z' - 'A' + 1];
	for(i = 'A'; i <= 'Z'; i++)check[i - 'A'] = 0;
	scanf("%d",&testcase);
	getchar();
	for(i = 0; i < testcase; i++)
	{
		fgets(str,sizeof(str),stdin);
		n = 0;
		for(;;)
		{
			if(str[n] == '\n')break;
			check[str[n] - 'A'] = i + 1;
			n = n + 1;
		}
		sum = 0;
		for(j = 'A'; j <= 'Z'; j++)
		{
			if(check[j - 'A'] != i + 1)
			{
					sum = sum + j;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}