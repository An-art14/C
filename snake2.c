#include <stdio.h>

int main() {
int n, m, arr[10][10] = {0}, k = 1;
  
 scanf("%d %d", &n, &m);
  
for (int i = 1; i <= n; i++) {
        if (i%2!=0) { 
 for( int j = 1; j <= m; j++) {
      arr[i][j] = k; 
      k++; 
    }
  }  
    if(i%2==0){
  for(int j=m; j >= 1; j--){
    arr[i][j]=k;
    k++;
       }
     }
  }  
  
  for(int i=1; i <= n; i++){
  for(int j=1; j <= m; j++){

     printf("%d\t", arr[i][j]);     
         }        
         
    printf("\n");
         }
  
  return 0;
}