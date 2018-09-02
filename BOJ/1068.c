#include<stdio.h>
int child[51][51];
int m[51];
int rootnode[51];
int rootm;
int dap;
int deletenode;
int travel(int nnode)
{
	int i;
	if(nnode != deletenode)
	{
		if(m[nnode] == 0)
		{
			dap = dap + 1;
		}
		else
		{
			if(m[nnode] == 1 && child[nnode][1] == deletenode)
			{
				dap = dap + 1;
			}
			else
			{
				for(i = 1; i <= m[nnode]; i++)
				{
					travel(child[nnode][i]);
				}
			}
		}
	}
	return 0;
}
int main()
{
	int i, j;
	int n;
	int pnode;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d",&pnode);
		if(pnode == -1)
		{
			rootm = rootm + 1;
			rootnode[rootm] = i;
		}
		else
		{
			m[pnode] = m[pnode] + 1;
			child[pnode][m[pnode]] = i;
		}
	}
	scanf("%d",&deletenode);
	for(i = 0; i < rootm; i++)
	{
		travel(rootnode[i + 1]);
	}
	printf("%d\n",dap);
	return 0;
}