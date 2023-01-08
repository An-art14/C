#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ru");
    
    int k, b;
    scanf("%d", &k);
    b=k%2;
    
    switch (b) {
        case 0 : printf("Не любит\n"); break;
        case 1 : printf("Любит\n"); break;
    }
    
    return 0;
}