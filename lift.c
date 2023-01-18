#include <stdio.h>

int main() {
int a, b, c;
scanf("%d %d %d", &a,&b,&c);
if (((a>=2)&&(a<=40))&&((b>=2)&&(b<=40))&&((c>=2)&&(b<=40))) {
if ((a<b)&&(b<c)&&(a<c)) {
    printf("%d %d %d\n", a, b, c); }
    if ((a<c)&&(c<b)&&(a<b)) {
      printf("%d %d %d\n", a, c, b); }   
 if ((b<c)&&(c<a)&&(b<a)) {
      printf("%d %d %d\n", b, c ,a); } 
  if ((b<a)&&(a<c)&&(b<c)) {
       printf("%d %d %d\n", b, a, c); } 
     if ((c<a)&&(a<b)&&(c<b)) {
        printf("%d %d %d\n", c, a, b); }   
     if ((c<b)&&(b<a)&&(c<a)) {
        printf("%d %d %d\n", c, b, a); }
        if (a==b) {
            if (b>c) {
                printf("%d %d %d\n", c, b, a); }
                if (b<c) {
                 printf("%d %d %d\n", b, a, c); } 
                 } 
       if (b==c) {
        if (b<a) {
         printf("%d %d %d\n", b, c, a); }    
          if (b>a) {
            printf("%d %d %d\n", a, b, c); }
       }
       if (a==c) {
        if (c>b) {
           printf("%d %d %d\n", b, c, a); }  
        if (c<b) {
            printf("%d %d %d\n", c, a, b); } 
       }
          if ((c==b)&&(b==a)&&(a==c)) {
            printf("%d %d %d\n", a, b, c); }
             
}
    return 0;
}