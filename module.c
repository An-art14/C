#include <stdio.h>
#include <math.h>

int main() {
    int x1, x2, res;
    scanf("%d",&x1);
    scanf("%d",&x2);
    
    res=fabs(x2-x1);
    printf("%d", res);
    return 0;
}