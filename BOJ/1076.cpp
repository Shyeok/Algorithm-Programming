#include<stdio.h>
char s[10];
int check()
{
	if(s[0] == 'b')
	{
		if(s[1] == 'l')
		{
			if(s[2] == 'a')return 0;
			else if(s[2] == 'u')return 6;
		}
		if(s[1] == 'r')return 1;
	}
	if(s[0] == 'r')return 2;
	if(s[0] == 'o')return 3;
	if(s[0] == 'y')return 4;
	if(s[0] == 'g')
	{
		if(s[3] == 'y')return 8;
		else if(s[3] == 'e')return 5;
	}
	if(s[0] == 'v')return 7;
	if(s[0] == 'w')return 9;
}
int main()
{
	int i;
	double su = 0, help = 1;
	int result = 0;
	scanf("%s",&s);
	result = check();
	su = result * 10;
	scanf("%s",&s);
	result = check();
	su = su + result;
	scanf("%s",&s);
	result = check();
	for(i = 1; i <= result; i++)
	{
		help = help * 10;
	}
	su = su * help;
	printf("%.lf\n",su);
	return 0;
}