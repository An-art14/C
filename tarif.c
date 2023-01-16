#include <stdio.h>

int main() {
  int a;
    scanf("%d", &a);
    int c=2*(a-500)+350;
    if ((a<500)||(a==500)) {
        printf("%d\n", 350); }
    if (a>500) {
        printf("%d",c); }
  return 0;
}