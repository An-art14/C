#include <stdio.h>

int main() {
int k, m;
int s=0;
scanf("%d %d", &k,&m);

if ((k<m)&&(k>0)){
for (int i=k; i<=m; i++) { 
    s=s+1;  
   //s=(m-k)+1;
    printf("%d ", i); }}

    if ((k<m)&&(k<0)) {
 for (int i=1; i<=m; i++) {
    s=s+1;
     printf("%d ", i); }}
     printf("\n%d\n", s);
    return 0;
}