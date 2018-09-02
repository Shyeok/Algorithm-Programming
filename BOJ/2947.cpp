#include<stdio.h>
int main()
{
	int i;
	int a[5], ok;
	for(i = 0; i < 5; i++)
	{
		scanf("%d",&a[i]);
	}
	int temp;
	for(;;)
	{
		ok = 0;
		if(a[0] > a[1])
		{
			temp = a[0];
			a[0] = a[1];
			a[1] = temp;
			for(i = 0; i < 5; i++)
			{
				printf("%d ",a[i]);
			}
			printf("\n");
			ok = 1;
		}
		if(a[1] > a[2])
		{
			temp = a[2];
			a[2] = a[1];
			a[1] = temp;
			for(i = 0; i < 5; i++)
			{
				printf("%d ",a[i]);
			}
			printf("\n");
			ok = 1;
		}
		if(a[2] > a[3])
		{
			temp = a[2];
			a[2] = a[3];
			a[3] = temp;
			for(i = 0; i < 5; i++)
			{
				printf("%d ",a[i]);
			}
			printf("\n");
			ok = 1;
		}
		if(a[3] > a[4])
		{
			temp = a[3];
			a[3] = a[4];
			a[4] = temp;
			for(i = 0; i < 5; i++)
			{
				printf("%d ",a[i]);
			}
			printf("\n");
			ok = 1;
		}
		if(ok == 0)break;
	}
	return 0;
}