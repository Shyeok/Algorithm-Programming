#include<stdio.h>
#include<string.h>
#include<map>
using namespace std;
int main()
{
	int i, j, flag;
	int testcase, len;
	char str1[100], str2[100];
	int cnt[30];
	scanf("%d",&testcase);
	for(i = 0; i < testcase; i++)
	{
		scanf("%s %s",&str1,&str2);
		for(j = 0; j <= 'z' - 'a'; j++)cnt[j] = 0;
		len = strlen(str1);
		for(j = 0; j < len; j++)cnt[str1[j] - 'a'] = cnt[str1[j] - 'a'] + 1;
		len = strlen(str2);
		for(j = 0; j < len; j++)cnt[str2[j] - 'a'] = cnt[str2[j] - 'a'] - 1;
		flag = 0;
		for(j = 0; j <= 'z' - 'a'; j++)
		{
			if(cnt[j] != 0)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0)printf("%s & %s are anagrams.\n",str1,str2);
		else if(flag != 0)printf("%s & %s are NOT anagrams.\n",str1,str2);
	}
	return 0;
}