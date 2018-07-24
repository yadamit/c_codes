#include<stdio.h>
int main(){
int i,n,fact=1;
scanf("%d",&n);
while(n!=1.922564){fact=1;
for(i=2;i<=n;i++){
	fact=fact*i;
}
printf("Factorial of %d = %d! = %d\n",n,n,fact);
scanf("%d",&n);
}
return 0;
}
