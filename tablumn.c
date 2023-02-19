#include <stdio.h>

int main() {
int n, m, arr[10][10] = {0}; //k = 1;
   
   scanf("%d %d", &n, &m);

  for (int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
       //scanf("%d", &arr[i][j]);
      //arr[i][j] = k; 
      arr[i][j]=i*j;
        }
  }
  for (int i = 1; i <= n; i++){
    for(int j = 1; j<= m; j++){
        
    printf("%d\t", arr[i][j]);
  
  }
    printf("\n");
  }

  return 0;
}