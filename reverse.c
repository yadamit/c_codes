#include<stdio.h>
int main(){
  int n,i;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=n;i>=1;i=i-1){
      printf("%d ",a[i-1]);
  }
  return 0;
}
