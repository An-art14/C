#include <stdio.h>

int main() {
int a, max=-9999, min=9999;

do {
    scanf("%d", &a);
     if ((max<a)&&(a!=0)) 
        {max=a;}
     if ((min>a)&&(a!=0))
        {min=a;}
     
} while (a!=0);

printf("%d %d", max, min);
 
  return 0;
}