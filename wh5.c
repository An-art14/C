/*#include <stdio.h>
int main () {
int n=0, n1=0;
scanf("%d", &n1);
scanf("%d", &n);
do{
if ((n1>n)||(n1==n)){
printf("NO"); return 0;}
n1=n;
   scanf("%d", &n); 
} while (n!=-9999);
    printf("YES");

}*/
#include <stdio.h>
int main (){
int n, n1, flag=0;
scanf("%d", &n);
while (n!=-9999){
    n1=n;
    scanf("%d", &n);
    if ((n1>=n)&&(n!=-9999))
    flag=1;  } 
(flag==0) ? printf("YES"): printf("NO");
    return 0;
}






