#include<stdio.h>
int prim[100000000]; // global array
void sieve(int n) {
int i, j = 2;
prim[0]=0; prim[1]=0;
for (i=2; i<=n; i++) prim[i] = 1;
while (j <= n) {
if (prim[j] == 0) { // composite
j++; continue;
}
for (i=2*j; i<=n; i=i+j)
prim[i] = 0;
j++;
}
}
int main() {
int i, n;
scanf("%d", &n);
// check n < 100000000
sieve(n); // set primes
for (i=2; i<=n; i++) {
if (prim[i] == 1)
printf("%d\n", i);
}
return 0;
}
