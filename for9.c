#include <stdio.h>
int main() {
int n, c=0;
scanf("%d", &n);
for (int i=1; i<=n; i++) {
     if (n%i==0) {  
    printf("%d ", i); 
    c=c+1;
    } }
    printf("\n%d\n", c);

return 0;
}