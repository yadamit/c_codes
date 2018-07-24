#include<stdio.h>
void main(){
  int n,i,sum=0;
  printf("Enter the number of integers you want to add:");
  scanf("%d",&n);
  int a[n];
  printf("Enter the integers you want to add:");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
    sum=sum+a[i];
  }
  printf("Sum of integers is %d",sum);
}
