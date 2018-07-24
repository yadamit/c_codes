#include<stdio.h>
void magicsq(int,int[][100]);
int main(){
  int size;
  int a[100][100];
  printf("enter the size ");
  scanf("%d",&size);
  if(size%2==0){
  }
  else{
    magicsq(size,a);
  }
  return 0;
}
void magicsq(int size,int a[][100]){
  int sqr=size*size;
  int i=0,j=size/2,k;
  for(k=1;k<=sqr;++k){
    a[i][j]=k;
    i--;
    j++;
    if(k%size==0){
      i+=2;
      --j;
    }
  else{
    if(j==size){
      j-=size;
    }
    else if(i<0){
      i+=size;
    }
    }
  }
  for(i=0;i<size;i++){
    for(j=0;j<size;j++){
      printf("%4d ",a[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}
