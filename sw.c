#include <stdio.h>

int main() {
   
    int a, b;
    char c;
    double n;
    scanf("%d %d %c", &a, &b, &c);
    
    
   switch (c) {
       case '-' : n=a-b; printf("%.2lf", n); break;
       case '+' : n=a+b; printf("%.2lf", n); break;
       case '*' : n=a*b; printf("%.2lf", n); break;
       case '/' : 
           switch (b) {
            case 0 : printf("EEROR!\n");break;
           default:  n=a/b; printf("%.2lf", n); break;

           } 
           break;

        default: printf("EEROR!\n");    
           
   }
 
     
  return 0;
}
