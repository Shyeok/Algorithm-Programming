#include <stdio.h>
static int s[10],n,f,test[10][10],solu[10];
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
bool testtest(void){
	for(int i=0;i<n;++i) test[0][i]=s[i];
	for(int k=1;k<n;++k){
	for(int i=0;i<n-k;++i){
		test[k][i]=test[k-1][i]+test[k-1][i+1];
	  }
	}
	if(test[n-1][0]==f) return true;
	else return false;
}
void permutation(int x,int y){
	int k,l;
	if(x==y){
			if(testtest()){
				if(solu[0]==0) {
					for(k=0;k<n;++k) solu[k]=s[k];
				}
				else{
					for(k=0;k<n;++k){
						if(s[k]<solu[k]){
							for(l=0;l<n;++l) solu[l]=s[l];
							break;
						}
						else if(s[k]>solu[k]) break;
					}
				}
			}
	}
	else{
		for(k=x;k<y;++k){
			swap(&s[x],&s[k]);
			permutation(x+1,y);
			swap(&s[x],&s[k]);
		}
	}
}
int main(void){
	int i,j;
	scanf("%d%d",&n,&f);
	for(i=0;i<n;++i)	s[i]=i+1;
	permutation(0,n);
	for(i=0;i<n;++i)
	printf("%d ",solu[i]);
}