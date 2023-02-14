#include <stdio.h>

int main() {
int arr[10][10]={0};
int n, c=1, b=1;
scanf("%d", &n);
for(int i=0; i<n; i++){
for(int m=0; m<n; m++){
  scanf("%d", &arr[i][m]); }
}
  for(int i=0; i<n; i++){
for(int m=0; m<n; m++){
  if (i==m) {
    c=c*arr[i][m];
  }
  if (i+m==n-1) {
    b=b*arr[i][m];     
  }
  printf("\n"); }
  }   
   (b>c)?printf("%d %d", b, c):printf("%d %d", c, b);
  
  return 0;
}