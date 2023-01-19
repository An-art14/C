#include <stdio.h>

int main() {
int k, m;
scanf("%d %d", &k,&m);
if ((k<m)&&(k>0)){
for (int i=k; i<=m; i++) {
    printf("%d ", i); }}
    if ((k<m)&&(k<0)) {
 for (int i=1; i<=m; i++) {
     printf("%d ", i); }}
    return 0;
}