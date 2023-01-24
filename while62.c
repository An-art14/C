#include <stdio.h>
int n, a=1, b=1;
int main() {
    scanf("%d", &n); 
 while (b<n) {
b=a*a;
a++;
if (b<=n)
printf("%d ", b); }
return 0;
}