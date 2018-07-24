#include<stdio.h>
#include<math.h>
int main(){
  int p,q,n;
  int sum=1;
  scanf("%d %d",&p,&q);
  for(n=p;n<=q;n++){
    int i,flag;
    if(n==2){
      printf("1 prime 2\n");
    }
    flag=0;
    if(n%2==0){
      flag=1;
    }
    for(i=3;i<=sqrt(n);i=i+2){
      if(n%i==0){
        flag=1;
        break;
      }
    }

    if(flag==1){
    }
    else{sum=sum+1;
      printf("%d prime %d\n",sum,n);
    }
  }
  printf("number of prime numbers from %d to %d is %d\n	",p,q,sum);
  return 0;
}
