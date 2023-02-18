#include <stdio.h>

int main() {
int n, k, arr[10][10]={0};
    scanf("%d", &n);
    for (int i=0; i<n; i++){     //считываем массив
    for (int j=0; j<n; j++){
        scanf("%d", &arr[i][j]);
        }
    }     
        scanf("%d", &k);   //считываем k-колич сдвигов 
       
         for(int i=0; i<n; i++){    
    for(int j=0; j<n; j++) {
        
        printf("%d ", arr[i][(j-k+k*n)%n]); //сдвиагаем столбцы вправо на k
       }
        printf("\n"); 
    }
  return 0;
}