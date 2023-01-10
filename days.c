#include <stdio.h>

int main() {
    int m, d ,n;
    scanf("%d %d", &m,&d);
    
    switch (m) {
        case 1 : n=0+d; printf("%d", n);break;
        case 2 : n=d+31; printf("%d", n);break; 
        case 3 : n=d+59; printf("%d", n);break;
        case 4 : n=d+90;  printf("%d", n);break;
        case 5 : n=d+120; printf("%d", n);break;
        case 6 : n=d+151;  printf("%d", n);break;
        case 7 : n=d+181;  printf("%d", n);break;
        case 8 : n=d+212;   printf("%d", n);break;
        case 9 : n=d+243; printf("%d", n);break;
        case 10 : n=d+273; printf("%d", n);break;
        case 11 : n=d+304; printf("%d", n);break;
        case 12 : n=d+334; printf("%d", n);break;
         default : printf("ERROR!");break;
    }
            
    return 0;
}