#include <stdio.h>
#include <stdlib.h>

int main() {
int S, E; 
scanf("%d %d", &S, &E);  
int N=S + rand()%(E - S + 1);
      

printf("%d", N);    
  
  return 0;
}