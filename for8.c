#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a,&b);
    if ((a>0)&&(a<b)) {
    for (int i=a; i<=b; i++) {
    for (int c=1; c<=i; c++) {
        printf("%4d", i); }}}
    return 0;
}