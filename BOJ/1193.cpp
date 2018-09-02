#include<stdio.h>
int n;
int main()
{
	int cnt = 0, head, tail;
	scanf("%d",&n);
	for(;;)
	{
		cnt = cnt + 1;
		if(n - cnt <= 0)break;
		n = n - cnt;
	}
	if( (cnt + 1)  % 2 == 0)
	{
		head = cnt + 1 - n;
		tail = n;
	}
	else
	{
		head = n;
		tail = cnt + 1 - n;
	}
	printf("%d/%d",head,tail);
	return 0;
}