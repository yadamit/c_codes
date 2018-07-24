#include<stdio.h>
#include<math.h>
int main(){
int a,b,i,fact;
fact=1;
printf("give input a&b:");
scanf("%d %d",&a,&b);
printf("a is %d\n",a);
printf("b is %d\n",b);
printf("a+b is %d\n",a+b);
printf("a-b is %d\n",a-b);
printf("a*b is %d\n",a*b);
printf("a/b is %d\n",a/b);
printf("a mod b is %d\n",a%b);
printf("a square is %d\n",a*a);
printf("b square is %d\n",b*b);
printf("a cube is %d\n",a*a*a);
printf("b cube is %d\n",b*b*b);
printf("square root of a is %f\n",sqrt(a));
printf("square root of b is %f\n",sqrt(b));
printf("%dth power of 2 is %.0f\n",a,pow(2,a));
printf("%dth power of 2 is %.0f\n",b,pow(2,b));
for(i=2;i<=a;i++){
	fact=fact*i;
}
printf("Factorial of %d = %d! = %d\n",a,a,fact);
fact=1;
for(i=2;i<=b;i++){
	fact=fact*i;
}
printf("Factorial of %d = %d! = %d\n",b,b,fact);
return 0;
}
