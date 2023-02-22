#include <stdio.h>
//вывести первые 3 буквы алфавита
int main(){
int k;
  scanf("%d", &k);
  char a[26]={0};
  for (int i =0; i<k; i++){
        a[i] = 65+i;
     printf("%c", a[i]);
   }
  return 0;
}