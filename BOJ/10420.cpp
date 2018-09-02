#include<stdio.h>
int a[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int i, j;
	int n;
	int year, month, day;
	int flag = 0;
	year = 2014;
	month = 4;
	day = 2;
	scanf("%d",&n);
	n = n - 1;
	for(;;)
	{
		if(n == 0)break;
		day = day + 1;
		if(day > a[month])
		{
			day = 1;
			month = month + 1;
			if(flag == 1 && month == 3 && day == 1)
			{
				month = 2;
				day = 29;
				flag = 0;
			}
		}
		if(month == 13)
		{
			month = 1;
			year = year + 1;
			if(year % 4 == 0 && year % 100 != 0)
			{
				flag = 1;
			}
			else if(year % 4 == 0 && year % 400 == 0)
			{
				flag = 1;
			}
			else
			{
				flag = 0;
			}
		}
		n = n - 1;
	}
	printf("%d-%02d-%02d",year,month,day);
	return 0;
}