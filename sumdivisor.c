#include<stdio.h>
int main(){
  int n,i,sum=0;
  printf("Enter a number whose sum of divisors you want to find: ");
  scanf("%d",&n);
  for(i=1;i<=n/2;i++){
    if(n%i==0){
      printf("%d+",i);
      sum=sum+i;
    }
  }ss
  printf("(%d)=%d+(%d)=%d\n",n,sum,n,sum+n);
  if(sum==n){printf("Congratulations!\nYou have discovered a perfect number.\n");}
  if(sum==1&&n>100){
    printf("Heartiest CONGRATULATIONS to you!!!\nYou have discovered a prime number greater than 100.\n");
    if(n>10000){
      printf("You are a genius.\nActually you have discovered a very large prime number.\n");
    }
  }
  return 0;
}
