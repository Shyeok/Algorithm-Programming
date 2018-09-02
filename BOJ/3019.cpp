#include<stdio.h>
int table[200];
int dap;
int main()
{
	int n, m;
	int i, j;
	int same;
	scanf("%d%d",&n,&m);
	for(i = 0; i < n; i++)
	{
		scanf("%d",&table[i]);
	}
	if(m == 1)
	{
		dap = 0;
		dap = dap + n;
		for(i = 0; i < n - 3; i++)
		{
			if(table[i] == table[i + 1] && table[i + 1] == table[i + 2] && table[i + 2] == table[i + 3])
			{
				dap = dap + 1;
			}
		}
	}
	else if(m == 2)
	{
		dap = 0;
		for(i = 0; i < n - 1; i++)
		{
			if(table[i] == table[i + 1])
			{
				dap = dap + 1;
			}
		}
	}
	else if(m == 3)
	{
		for(i = 0; i < n - 2; i++)
		{
			if(table[i] == table[i + 1] && table[i + 1] + 1 == table[i + 2])
			{
				dap = dap + 1;
			}
		}
		for(i = 0; i < n - 1; i++)
		{
			if(table[i] == table[i + 1] + 1)
			{

				dap = dap + 1;
			}
		}
	}
	else if(m == 4)
	{
		for(i = 0; i < n - 2; i++)
		{
			if(table[i + 2] == table[i + 1] && table[i + 1] + 1 == table[i])
			{
				dap = dap + 1;
			}
		}
		for(i = 0; i < n - 1; i++)
		{
			if(table[i] + 1 == table[i + 1])
			{
				dap = dap + 1;
			}
		}
	}
	else if(m == 5)
	{
		for(i = 0; i < n - 1; i++)
		{
			if(table[i] + 1 == table[i + 1])
			{
				dap = dap + 1;
			}
		}
		for(i = 0; i < n - 1; i++)
		{
			if(table[i] == table[i + 1] + 1)
			{

				dap = dap + 1;
			}
		}
		for(i = 0; i < n - 2; i++)
		{
			if(table[i + 2] == table[i] && table[i + 1] == table[i])
			{
				dap = dap + 1;
			}
		}
		for(i = 0; i < n - 2; i++)
		{
			if(table[i + 2] == table[i] && table[i + 1] == table[i] - 1)
			{
				dap = dap + 1;
			}
		}
	}
	else if(m == 6)
	{
		for(i = 0; i < n - 2; i++)
		{
			if(table[i + 2] == table[i] && table[i + 1] == table[i])
			{
				dap = dap + 1;
			}
		}
		for(i = 0; i < n - 1; i++)
		{
			if(table[i] == table[i + 1])
			{
				dap = dap + 1;
			}
		}
		for(i = 0; i < n - 2; i++)
		{
			if(table[i + 2] == table[i + 1] && table[i + 1] - 1 == table[i])
			{
				dap = dap + 1;
			}
		}
		for(i = 0; i < n - 1; i++)
		{
			if(table[i] == table[i + 1] + 2)
			{
				dap = dap + 1;
			}
		}
	}
	else if(m == 7)
	{
		for(i = 0; i < n - 2; i++)
		{
			if(table[i + 2] == table[i] && table[i + 1] == table[i])
			{
				dap = dap + 1;
			}
		}
		for(i = 0; i < n - 1; i++)
		{
			if(table[i] == table[i + 1])
			{
				dap = dap + 1;
			}
		}
		for(i = 0; i < n - 2; i++)
		{
			if(table[i] == table[i + 1] && table[i + 1] - 1 == table[i + 2])
			{
				dap = dap + 1;
			}
		}
		for(i = 0; i < n - 1; i++)
		{
			if(table[i] == table[i + 1] - 2)
			{
				dap = dap + 1;
			}
		}
	}
	printf("%d\n",dap);
	return 0;
}