#include <stdio.h>
int main (){
int arr[10][10]={0};
int n, a=0;
scanf("%d", &n);
for (int i=0; i<n; i++){
for (int m=0; m<n; m++){
    //arr[i][m]=abs(m-i)+1;
    if (i==m) {
        a=0;
    } 
    if (i<m){
       a=m-i;
    }
    if (i>m) {
        a=i-m;
    }
    arr[i][m]=a+1;
}

}
for (int i=0; i<n; i++){
for (int m=0; m<n; m++){
printf("%d ", arr[i][m]);}
printf("\n"); }
    return 0;
}