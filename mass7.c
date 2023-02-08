#include <stdio.h>

int main() {
int arr_n[100];
int  n, sum=0, k=0;
double sred;  
scanf("%d", &n);
    for (int i=1; i<=n; i++){
        scanf("%d", &arr_n[i]);
       k++; //n
        sum=(double)sum+arr_n[i];
     sred=(double)sum/k; }
    for (int i=1; i<=n; i++){  
    if (arr_n[i]>sred){
       printf("%d ", arr_n[i]); } 
    }
    for (int i=1; i<=n; i++) {
    if (arr_n[i]<=sred) {
       printf("%d ", arr_n[i]); } 
    }
      
  return 0;
}