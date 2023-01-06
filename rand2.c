#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    srand(time(NULL));
    int rand();
    printf("%d\n",1 + rand()%2);
    return 0;
}