#include <stdio.h>

int main() {
    int a=1200, b=1400;
    double c=0.2;
    double res;
      scanf("%d %d %lf",&a,&b,&c);
    
    res=c*(b-a);
    
    printf("%.2lf\n", res);
    
    return 0;
}