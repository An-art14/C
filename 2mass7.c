#include <stdio.h>

int main() {
int arr[10][10]={0};
int n, a, s=0, k[10]={0};
  scanf("%d %d", &n, &a);
    for(int i=1; i<=n; i++){
    for(int m=1; m<=a; m++){
        scanf("%d", &arr[i][m]);}
    }
     for(int i=1; i<=a; i++){
        s=0;
    for(int m=1; m<=n; m++){
        s=s+arr[m][i];}
        k[i]=s; }
     for (int i=a; i>=1; i--){
        printf("%d ", k[i]); }     
    return 0;
}