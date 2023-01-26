#include <stdio.h>
int main () {
int n, k=0;
scanf("%d", &n);
while (n!=0) {
k++; //n=n/10; 
n=n/10; //k++;
}
printf("%d\n", k);
    return 0;
}