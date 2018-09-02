#include<stdio.h>
int main()
{
	int n;
	char c;
	n = 0;
	for(;;)
	{
		scanf("%c",&c);
		if(c == '\n')break;
		n = n + 1;
	}
	printf("%d\n",n);
	return 0;
}
