#include <stdio.h>

int main() {
 int a, b, c;
 scanf("%d %d %d",&a,&b,&c);
     
      if ((a>0) && (b>0) && (c>0)) {
        printf("%d\n", 3);
      }
      else {
      printf("%d\n", 2); }
      
      /*if (((a>0)&&(b<0) && (c>0)) | ((a<0)&&(b>0)&&(c>0))| ((a>0)&&(b>0)&&(c<0))) {
        printf("%d\n", 2);
      }*/
      
       if (((a>0) && (b<0) && (c<0)) | ((a<0)&&(b>0)&&(c<0)) | ((a<0)&&(b<0)&&(c>0))) {
        printf("%d\n", 1); 
       } 
      if ((a<0) && (b<0) && (c<0)) {
        printf("%d\n", 0);
      }
      
      
    
  return 0;
}