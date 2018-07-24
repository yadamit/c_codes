#include<stdio.h>
int main(){
int i, j;
for (i=1; i<=10 ; i=i+1) {
for (j=1; j<=35; j=j+1) {
printf("%4d", i*j); // Displaying i, 2i, ..., 5i
}
printf("\n"); // Move to the next line
}
return 0;
}
