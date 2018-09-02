#include<stdio.h>
int main()
{
	int i;
	int n;
	char Frist[1001];
	scanf("%d",&n);
	for(i = 1; i <= n; i++)Frist[i] = 0;
	Frist[1] = 'W';
	for(i = 2; i <= n; i++)
	{
		if(Frist[i] != 'W' && i - 1 >= 1)
		{
			if(Frist[i - 1] == 'W')Frist[i] = 'L';
			else if(Frist[i - 1] == 'L')Frist[i] = 'W';
		}
		if(Frist[i] != 'W' && i - 3 >= 1)
		{
			if(Frist[i - 3] == 'W')Frist[i] = 'L';
			else if(Frist[i - 3] == 'L')Frist[i] = 'W';
		}
	}
	if(Frist[n] == 'W')printf("SK\n");
	else printf("CY\n");
	return 0;
}