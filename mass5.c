#include <stdio.h>

int main() {
int arr_n[100];
int n, flag=0;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &arr_n[i]); }
    for (int i=0; i<n; i++) {
        if ((arr_n[0]< arr_n[i])&&(arr_n[i]<arr_n[n-1])) {
            printf("%d ", arr_n[i]);
            flag=1; }
    }
  
      if (flag==0) {
         printf("0"); }
                   
  return 0;
}