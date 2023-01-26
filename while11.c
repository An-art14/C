#include <stdio.h>
#include <math.h>
int main (){
int n, a=0, b=0;

scanf("%d", &n);
while (a<n) {  
 b++;   
a=pow(2, b); }
//if (a<=n) 
printf("%d ", b); 
 return 0;
}