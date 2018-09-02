#include<stdio.h>
int main()
{
	int i, j;
	int n, m, time, money;
	char a, b, c, d, e, f, g, h;
	money = 0;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		getchar();
		scanf("%c%c%c%c%c%c%c%c",&a,&b,&c,&d,&e,&f,&g,&h);
		time = 0; m = 0;
		time = (int)(a - '0') * 10 * 60;
		time = time + (int)(b - '0') * 60;
		time = time + (int)(d - '0') * 10;
		time = time + (int)(e - '0');
		m = (int)(g - '0') * 10;
		m = m + (int)(h - '0');
		for(j = 1; j <= m; j++)
		{
			if(time >= 24 * 60)time = 0;
			if(time >= 7 * 60 && time <= 19 * 60 - 1)money = money + 10;
			else money = money + 5;
			time = time + 1;
		}
	}
	printf("%d\n",money);
	return 0;
}