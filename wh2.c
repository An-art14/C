#include <stdio.h>
int main (){
int n;
scanf("%d", &n);
for (int k=1; k<=n; k++){

for (int i=1; i<=k; printf("%d ", i++));
printf("\n");
}

    return 0;
}