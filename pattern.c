#include<stdio.h>
int main(){
	int n,p,i,j,m;
	scanf("%d",&n);
	for(p=1;p<=n;p=p+2){
		printf("\n%d\n",p);
		for(i=1;i<=p;i=i+2){
			for(m=1;m<=(p-i)/2;m=m+1){
				printf(" ");
			}
			for(j=1;j<=i;j=j+1){
				printf("*");
			}
				printf("\n");
		}
		for(i=p-2;i>=1;i=i-2){
			for(m=1;m<=(p-i)/2;m=m+1){
			printf(" ");
			}
			for(j=1;j<=i;j=j+1){
				printf("*");
			}
			printf("\n");
		}
		//printf("\n%d\n",p);
	}
	return 0;
}
