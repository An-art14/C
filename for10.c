#include <stdio.h>
int main() {
    int n, b = 0;
    scanf("%d", &n);
    for ( int i = 1; i <= n; i++){
        if (n % i == 0) {
        b=b+1; }}
    if (b==2) {
        printf("1\n");}
    else {
        printf("0\n");}
    
    return 0;
}