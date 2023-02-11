#include <stdio.h>

int main() {
int arr_n[10][10]={0};
int n, k=0;
 scanf("%d", &n);
    for(int i=0; i<n; i++){
    for(int m=0; m<n; m++){
        if(i%2!=0){
       arr_n[i][m]=k;
         k--;
        } 
            if(i%2==0){
                arr_n[i][m]=k+1;
                k++;
             }
        
        printf("%d ", arr_n[i][m]);}
        printf("\n"); }
    return 0;
}