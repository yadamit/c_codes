#include<stdio.h>
#include<math.h>
int main(){
int i;
int n;
scanf("%d",&n);
float rsum;
rsum=0;
for(i=1;i<=n;i=i+1){
rsum=rsum+1.00/pow(2,i);
}
printf("rsum is %.25f",rsum);
return 0;
}

