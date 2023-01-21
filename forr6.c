#include <stdio.h>

int main() {
int n;
scanf("%d", &n);
int d1=1, d2=1, d3;
//d3=d1+d2;
if (n==1) {
    printf("%d\n", 1); }
if (n==2){
    printf("%d\n", 1);}
 if ((n>2)&&(n<=45)) {  
   for (int i=3; i<=n; i++) {
    d3=d1+d2;
    d1=d2;
    d2=d3; }
printf("%d\n", d3);  }
    return 0;
}