#include<stdio.h>
int stack[100000];
int a[100000];
int order[100000];
int main()
{
	int i; 
	int n, m_0, m_1, m_2, su;
	int ok = 0;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	m_0 = 0; m_1 = 0; m_2 = -1;
	su = 0;
	for(;;)
	{
		if(m_2 >= 0 && stack[m_2] == a[m_1])
		{
			order[m_0] = 2;
			m_0 = m_0 + 1;
			m_1 = m_1 + 1;
			m_2 = m_2 - 1;
		}
		else if(su == n)
		{
			if(m_2 == -1)
			{
				ok = 1;
				break;
			}
			else
			{
				ok = -1;
				break;
			}
		}
		else 
		{
			m_2 = m_2 + 1;
			su = su + 1;
			stack[m_2] = su;
			order[m_0] = 1;
			m_0 = m_0 + 1;
		}
	}
	if(ok == 1)
	{
		for(i = 0; i < m_0; i++)
		{
			if(order[i] == 1)printf("+\n");
			if(order[i] == 2)printf("-\n");
		}
	}
	else if(ok == -1)printf("NO\n");
	return 0;
}