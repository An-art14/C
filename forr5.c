#include <stdio.h>

int main() {
    int k;
    scanf("%d", &k);
    int c=1;
    if (k==0) {
        printf("%d\n", 1); }
       if ((k>0)&&(k<=12)) {
    for (int i=1; i<=k; i++) { 
        c=c*i;  }
    printf("%d\n", c);}
    return 0;
}

 