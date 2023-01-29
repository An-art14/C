#include <stdio.h>
int main () {
double n, e =1, f=1;
scanf("%lf", &n);
int k=1;
while (1/f>n) {
f=f*k;
k++;
e = e+(1/f);
}
printf("%.8lf", e);
    return 0;
}