#include<stdio.h>
int max(int a,int b);
int collect(int m[][100],int i,int j);
int main(){
  int m[100][100],i,j,n;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&m[i][j]);
    }
  }
  printf("%d\n",collect(m,n-1,n-1));
  return 0;
}
int collect(int m[][100],int i,int j){
  if(i==0,j==0){
    return m[0][0];
  }
  if(i==0){
    return m[i][j]+collect(m,i,j-1);
  }
  if(j==0){
    return m[i][j]+collect(m,i-1,j);
  }
  return m[i][j]+max(collect(m,i,j-1),collect(m,i-1,j));
}
int max(int a,int b){
  if(a>b){
    return a;
  }
  else{
    return b;
  }
}
