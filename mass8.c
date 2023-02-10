#include <stdio.h>

int main() {
int arr_n[100], n;
scanf("%d", &n);
for (int i=0; i<n; i++) {
   scanf("%d", &arr_n[i]); }
  
       for (int i=n/2; i<n; i++){
       printf("%d ", arr_n[i]);  }
   for (int i=0; i<n/2; i++) { 
       printf("%d ", arr_n[i]);
   }
   
    return 0;
}