#include <stdio.h>

int main() {
    int A;
    float R;
    double PI=3.1415926;
    scanf("%d\n",&A);
    
    R=(A*PI)/180;
    printf("%.2f\n",R);
    return 0;
}