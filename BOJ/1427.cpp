#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	int i, len;
	char str[20];
	int arr[20];
	fgets(str,sizeof(str),stdin);
	len = strlen(str);
	len = len - 1;
	for(i = 0; i < len; i++)arr[i] = (int)(str[i] - '0');
	sort(arr,arr+len);
	for(i = len - 1; i >=0; i--)printf("%d",arr[i]);
	return 0;
}