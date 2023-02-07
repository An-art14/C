#include <stdio.h>

int main() {
int arr_n[100];
int n, sum=0, k=0;
    double sred;
scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &arr_n[i]);}
    for (int i=0; i<n; i++){
        k++;
        sum=(double)sum+arr_n[i];
        sred=(double)sum/k;}
     printf("%.2lf", sred);   
  return 0;
}