#include <stdio.h>

int main() {
int arr[10][10]={0};
int n, b=0, c=0;
    scanf("%d", &n);
   for(int i=0; i<n; i++){
   for(int m=0; m<n; m++){
       scanf("%d", &arr[i][m]);}
   }
    for(int i=0; i<n; i++){
    for(int m=0; m<n; m++){
        if(i<m){
        b=b+arr[i][m];}
        if(m>n-i-1){
          c=c+arr[i][m]; }  
        printf("\n");
    }
    }
    (c<b)?printf("%d %d", c, b): printf("%d %d", b, c);
        
    return 0;
}