#include<stdio.h>
int main(){
  int i,flag,n;
  flag=0;
  scanf("%d",&n);
  for(i=2;i<n;i++){
    if(n%i==0){
      flag=1;
      break;
    }
  }

  if(flag==1){
    printf("composite\n");
    return 0;
  }
  else{
    printf("prime\n");
  }
  return 0;
}
