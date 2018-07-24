#include<stdio.h>
int main(){
int a,b,x,t;
scanf("%d %d",&a,&b);
while(a<b){
t=a;
a=b;
b=t;}
for(x=b,x>=1,x=x-1){
while(a%x=0&&b%x=0){
printf("%d",x);
}
}
return 0;
}
