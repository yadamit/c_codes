#include<stdio.h>
int main(){
  int i,j,mat[3][3];
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      scanf("%d",&mat[i][j]);
      if(i!=j){
        if(mat[i][j]!=0){
          printf("It is not an identity matrix.\n");
          return 0;
        }
      }
      else{
        if(mat[i][j]!=1){
          printf("It is not an identity matrix.\n");
          return 0;
        }
      }
    }
  }
  printf("It is an identity matrix.\n");
  return 0;
}
