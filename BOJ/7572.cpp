#include<stdio.h>
int main()
{
	int i;
	int n, help;
	int a, b;
	scanf("%d",&n);
	a = 0; b = 0;
	n = n + 57;
	for(i = 1; i <= n; i++)
	{
		if(a == 12)a = 0;
		if(b == 10)b = 0;
		a = a + 1;
		b = b + 1;
	}
	printf("%c%d\n",(char)(a - 1 + 'A'),b - 1);
	return 0;
}