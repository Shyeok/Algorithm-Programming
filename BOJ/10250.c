#include<stdio.h>
int main()
{
	int testcase = 0;
	int h, w, n, y, x;
	scanf("%d",&testcase);
	while(testcase)
	{
		testcase = testcase - 1;
		scanf("%d%d%d",&h,&w,&n);
		y = 1;
		x = 1;
		for(;;)
		{
			if(n == 1)break;
			n = n - 1;
			y = y + 1;
			if(y > h)
			{
				y = 1;
				x = x + 1;
			}
		}
		if(y > 9)printf("%c%c",(char)((y/10) + '0'),(char)((y%10)+'0'));
		else
			printf("%c",(char)(y + '0'));
		printf("%c%c\n",(char)((x/10) + '0'),(char)((x%10)+'0'));
	}
	return 0;
}