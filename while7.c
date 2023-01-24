#include <stdio.h>
#include <math.h>
int main () {
int n, a=-1, b=0;
scanf("%d", &n);
while (b<n){
a++;
b=pow(2, a);}
if ((b==n)&&(n!=0)) {
    printf("YES"); 
}else {
    printf("NO");}


return 0;
}