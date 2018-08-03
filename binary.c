#include<stdio.h>
int main(){
	long long int p,n,i,c=0;
	scanf("%lld",&n);
	p=n;
	while(n>0){
		n=n/2;
		c=c+1;
	}
	printf("\n");
	int a[c];
	for(i=0;i<c;i++){
		a[i]=p%2;
		p=p/2;
	}
	for(i=c-1;i>=0;i--){
	printf("%d",a[i]);
        }
	return 0;
}
