/*#include <stdio.h>
int main (){
int n, flag = 1, n1 = -9999;
do { 
    scanf("%d", &n);
if (n != -9999){
n1 = n;}
if (n1<=0)
 flag=0;
} while (n!=-9999);
(flag==1)?printf("YES"): printf("NO");
    return 0;
} */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    do {
        if (n<0 || n == -9999) {printf("NO"); return 0;}
        scanf("%d", &n);
    } while (n != -9999);
    printf("YES");
}