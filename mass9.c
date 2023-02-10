#include <stdio.h>

int main() {
   int n, max=-9999, min=9999;
   scanf("%d", &n);
   int arr_n[100];
   for(int i=0; i<n; i++){
      scanf("%d", &arr_n[i]);
      if(arr_n[i]>max) max = arr_n[i];
      if(arr_n[i]<min) min = arr_n[i];
   }
   for(int i=0; i<n; i++){
      if(arr_n[i]==max)  arr_n[i]=min;
      else 
      if(arr_n[i]==min)      arr_n[i]=max;
   
   
      printf("%d ", arr_n[i]); }
  
  return 0;
}