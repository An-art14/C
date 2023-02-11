#include <stdio.h>

int main() {
int arr_n[10][10]={0};
int n, m;
    scanf("%d %d", &n, &m);
    for (int i=0; i<n; i++){
    for (int k=0; k<m; k++){
        scanf("%d", &arr_n[i][k]); } }
    for (int i=0; i<m; i++){
    for (int k=0; k<n; k++){
        
        printf("%d ", arr_n[k][i]);
    }
        printf("\n"); }

  return 0;
}