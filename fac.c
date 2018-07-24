#include<stdio.h>
int fact(int n){
  int fac;
  if(n==0){
    fac=1;
  }
  else{
    fac=n*fact(n-1);
  }
  return fac;
}
int main(){
  int n;
  printf("Enter the number whose factorial you want to find:");
  scanf("%d",&n);
  while(n!=1.235647){
    printf("Factorial of %d is %d\nEnter next number:",n,fact(n));
    scanf("%d",&n);
  }
  return 0;
}
