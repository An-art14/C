#include <stdio.h>
int main () { 
int n, m, sum = 0, min = 999, max = -999, c_min , c_max;
int arr[10][10]={0};
    scanf("%d %d", &n, &m);
       for (int i = 0; i < n; i++) {  //считываем массив
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
   for (int i = 0; i < m; i++) {   //считаем сумму элементов в столбце(транспонированная матрица)
    sum = 0;
    for (int j = 0; j < n; j++) {
        sum += arr[j][i]; 
     if(sum<min){         // находим столбец с мин суммой
        min=sum;
        c_min=i;
      }
      if(sum>max){     //находим столбец с макс суммой
        max=sum;
        c_max=i;
      } } }
       
    for (int i = 0; i < n; i++) {      
        for(int j = 0; j < m; j++) {
             
            if (j == c_min) {    // меняем столбцы с мин и макс суммами местами
                printf("%d ", arr[i][c_max]); 
            } else  if (j == c_max) {
                printf("%d ", arr[i][c_min]);
            } else {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
return 0; }