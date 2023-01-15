#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1,&y1,&x2,&y2);
    double  r1, r2;
    int A, B;
    A=1;
    B=2;
    r1=sqrt((x1*x1)+(y1*y1));
    r2=sqrt((x2*x2)+(y2*y2));

    if (r1<r2) {
        printf("%d\n", 1);
    }
        else {
           printf("%d\n", 2);
        }

    
return 0;
}
   