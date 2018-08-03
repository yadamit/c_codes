#include<stdio.h>
int main(){
	int n,p,i,count=0,flag=0;
	scanf("%d",&n);
	p=n;
	while(n>0){
	        n=n/10;
		count=count+1;
	}
	int a[count];
	for(i=0;i<count;i++){
		a[i]=p%10;
		p=p/10;
	}
	for(i=0;i<count;i++){
		if(a[i]==a[count-i-1]){
			flag++;
		}
	}
	if(flag==count){
		printf("Yes,It is a palindrome number.\n");
	}
	else{
		printf("No,It is not a palindrome number.\n");
	}
	return 0;
}
