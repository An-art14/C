#include <stdio.h>
#include <math.h>

int main() {
 int k, x;
    scanf("%d %d", &k, &x);
     
    switch (k) {
        case 1 :  printf("%d", x);break;
        case 2 : x=(x/10)*(x%10); printf("%d", x);break;
        case 3 : x=(x/100)*((x/10)%10)*(x%10); printf("%d", x);break;
        case 4 : x=(x/1000)*((x/100)%10)*((x/10)%10)*(x%10); printf("%d", x);break;
        default: printf("ERROR!\n");
    }
  return 0;
}