#include<stdio.h>
#include<math.h>
#define MAX 1010
int main()
{
	int i, j, k;
	int n, m;
	int arr[MAX];
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i = 0; i < n; i++)
	{
		scanf("%d",&m);
		arr[i] = arr[i] - m;
	}
	int dap = 0;
	for(i = 0; i < n; i++)
	{
		if(arr[i] != 0)
		{
			m = arr[i];
			dap = dap + abs(m);
			arr[i] = 0;
			for(j = i + 1; j < n; j++)
			{
				if(arr[j] * m <= 0)break;
				if(m * m > arr[j] * arr[j])
				{
					m = arr[j];
					arr[j] = 0;
				}
				else
				{
					arr[j] = arr[j] - m;
				}
			}
		}
	}
	printf("%d\n",dap);
	return 0;
}