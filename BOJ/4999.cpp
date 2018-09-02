#include<stdio.h>
int main()
{
	int i, j;
	char a;
	int n, m;
	n = 0;
	for(;;)
	{
		scanf("%c",&a);
		if(a == 'h')break;
		n = n + 1;
	}
	getchar();
	m = 0;
	for(;;)
	{
		scanf("%c",&a);
		if(a == 'h')break;
		m = m + 1;
	}
	if(n >= m)printf("go\n");
	else printf("no\n");
	return 0;
}