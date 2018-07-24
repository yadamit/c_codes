#include<stdio.h>
void hanoi(int n,char a,char c,char b){
  if(n==0){
    return;
  }
  hanoi(n-1,a,b,c);
  printf("move one disk from %c to %c\n",a,c);
  hanoi(n-1,b,c,a);
}
int main(){
  int n;
  char a,b,c;
  scanf("%d",&n);
  hanoi(n,'a','c','b');
  return 0;
}
