#include<stdio.h>
int main()
{
	int i;
	int r, w, l;
	int testcase = -1;
	int a[100000];
	for(;;)
	{
		scanf("%d",&r);
		if(r == 0)break;
		testcase = testcase + 1;
		a[testcase] = 0;
		scanf("%d %d",&w,&l);
		if(w * w + l * l <= 4 * r * r)a[testcase] = 1;
	}
	for(i = 0; i <= testcase; i++)
	{
		printf("Pizza %d",i + 1);
		if(a[i] == 0)
		{
			printf(" does not fit");
		}
		else if(a[i] == 1)
		{
			printf(" fits");
		}
		printf(" on the table.\n");
	}
	return 0;
}