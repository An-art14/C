#include <stdio.h>

int main() {
int a, b;
scanf("%d %d", &a,&b);
 (((a>=1)&&(a<=31))&&((b==1)|(b==3)|(b==5)|(b==7)|(b==8)|(b==10)|(b==12)))||((((a>=1)&&(a<=30))&&(b==4)|(b==6)|(b==9)|(b==11)))||(((a>=1)&&(a<=29))&&(b==2))? printf("correct\n"):printf("error\n");

    return 0; }







