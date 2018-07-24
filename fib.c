#include<stdio.h>
int fib(int n){
  int first=0,second=1,i,next;
  if(n<=1){
    return n;
  }
  else{
    for(i=2;i<=n;i++){
      next=first+second;
      first=second;
      second=next;
    }
    return next;
  }
}
int main(){
  int n,i;
  scanf("%d",&n);
  for(i=0;i<=n;i++){
    printf("%d ",fib(i));
  }
  return 0;
}
