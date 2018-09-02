#include<stdio.h>
#include<algorithm>
int n, m;
int A[200000], dap[200000];
int main()
{
	int i, j;
	int hello, top, middle, button;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d",&A[i]);
	}
	std::sort(A,A+n);
	scanf("%d",&m);
	for(i = 0; i<m;i++)
	{
		top = n - 1;
		button = 0;
		scanf("%d",&hello);
		for(;;)
		{
			middle = (top + button) / 2;
			if(A[middle] == hello)
			{
				dap[i] = 1;
				break;
			}
			else if(A[top] == hello)
			{
				dap[i] = 1;
				break;
			}
			else if(A[button] == hello)
			{
				dap[i] = 1;
				break;
			}
			else
			{
				if(middle == top || middle == button)break;
				else if(A[middle] > hello)top = middle;
				else if(A[middle] < hello)button = middle;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		printf("%d\n",dap[i]);
	}
	return 0;
}