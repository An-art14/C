#include <stdio.h>

int main() {
int arr_n[100]; 
int n;
scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &arr_n[i]);
        if (arr_n[i]%2==0){
            printf("%d ", arr_n[i]);}  }
        for (int i=0; i<n; i++){
        if (arr_n[i]%2!=0){   
        printf("%d ", arr_n[i] );} }
    
   return 0;         

}