#include <stdio.h>
int main () {
int n=0, a=0, a1=0,  k=1;
scanf("%d\n",  &n);
while (k<=n) {  
scanf("%d", &a);
if (a!=a1){
a1=a;
 printf("%d ", a1);}
 k++;
}
    return 0;
}
