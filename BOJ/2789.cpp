#include<stdio.h>
int check[100];
int main()
{
	char c;
	char dap[1000];
	int i, n;
	n = 0;
	check['C' - 'A'] = 1; check['A' - 'A'] = 1;
	check['M' - 'A'] = 1; check['B' - 'A'] = 1;
	check['R' - 'A'] = 1; check['I' - 'A'] = 1;
	check['D' - 'A'] = 1; check['G' - 'A'] = 1;
	check['E' - 'A'] = 1;
	for(;;)
	{
		scanf("%c",&c);
		if(c == '\n')break;
		if(check[c - 'A'] != 1)
		{
			n = n + 1;
			dap[n] = c;
		}
	}
	for(i = 1; i <= n; i++)
	{
		printf("%c",dap[i]);
	}
	printf("\n");
	return 0;
}