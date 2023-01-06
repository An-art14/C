#include <stdio.h>
#include <math.h>
int main() {
  double a, b, y;
  double s;
  double pi=3.141593;  
  scanf("%lf %lf %lf", &a, &b, &y);
   
    y=y*pi/180;
    
    s = 0.5*((a*b)*sin(y));
    printf("%.2lf", s);
    
    
    
  return 0;
}