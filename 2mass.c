#include <stdio.h>

int main() {
int arr[10][10]={0};
int n, a;
scanf("%d %d", &n,&a);
    for(int i=0; i<n; i++){
    for(int k=0; k<a; k++){
        scanf("%d", &arr[i][k]); } }
       for(int i=0; i<n; i++){
    for(int k=0; k<a; k++){ 
        printf("%d ", arr[i][k]);  }
       printf("\n");  }
        
  return 0;
}