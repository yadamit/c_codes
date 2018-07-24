#include<stdio.h>
int main(){
  int p,i,n,sum,cout=0;
  printf("Enter the number upto which you want perfect numbers: ");
  scanf("%d",&p);
  printf("Perfect numbers upto %d are:\n",p);
  for(n=1;n<=p;n++){
    sum=0;
    for(i=1;i<=n;i++){
      if(n%i==0){
        sum=sum+i;
      }
    }
    if(sum==2*n){
      cout=cout+1;
      printf("%dth perfect number is %4d .Its factors are: ",cout,n);
      for(i=1;i<=n;i++){
        if(n%i==0){
          printf("%4d ",i);
        }
      }
      printf("\n");
    }
  }
  return 0;
}
