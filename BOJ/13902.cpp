#include<stdio.h>
int arr[10005];
int brr[10005];
int size[10005];
int check[10005];
int main()
{
	int n, m;
	int num = 0;
	int i, j;
	scanf("%d%d",&n,&m);
	for(i = 0; i < m; i++)
	{
		scanf("%d",&brr[i]);
	}
	brr[m] = 0;
	for(i = 0; i <= m; i++)
	{
		for(j = i + 1; j <= m; j++)
		{
			if(check[brr[i] + brr[j]] == 0)
			{
				size[num] = brr[i] + brr[j];
				num = num + 1;
				check[brr[i] + brr[j]] = 1;
			}
		}
	}
	arr[0] = 1;
	for(i = 1; i <= n; i++)
	{
		for(j = 0; j < num; j++)
		{
			if(i - size[j] >= 0)
			{
				if(arr[i - size[j]] != 0)
				{
					if(arr[i] == 0)
					{
						arr[i] = arr[i - size[j]] + 1;
					}
					else if(arr[i] > arr[i - size[j]] + 1)
					{
						arr[i] = arr[i - size[j]] + 1;
					}
				}
			}
		}
	}
	printf("%d",arr[n] - 1);
	return 0;
}