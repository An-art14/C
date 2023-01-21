#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a,&b);
    for (int i=0; (i+a)<=b; i++) {
    for (int c=1; c<=(i+1); c++) {
        printf("%5d", a+i); }}
    return 0;
}
