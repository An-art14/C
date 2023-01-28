#include <stdio.h>
int main () {
int a, b, k=0, kus;
scanf("%d %d", &a,&b);
kus=a;
while (kus%b!=0) {
    k++;
kus=k*a;
}
printf("%d", kus); 
    return 0;
}
