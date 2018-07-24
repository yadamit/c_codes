#include<stdio.h>
#include<math.h>
int main(){
	int a,i;
	scanf("%d",&a);
	printf("\n");
	for(i=1;i<=a;i++){
		printf("%d-> %.0f\n",i,pow(2,i));
	}
	return 0;
}
