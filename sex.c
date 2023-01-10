
#include <stdio.h> 
int main(void){

  int age, height, weight;
  char sex;
  double bov_m;
  double bov_f;
    scanf("%c %d %d %d",&sex, &age, &height, &weight);

    switch (sex) {
     case 'f' :  bov_f = 10*weight + 6.25*height - 5*age - 161;
     printf("| BMR |\n");
     printf("|%8.2f|\n", bov_f);
     break; 
     case 'm' : bov_m = 10*weight + 6.25*height - 5*age + 5;
     printf("| BMR |\n");
     printf("|%8.2f|\n", bov_m);break;
     default: printf("ERROR!\n");

    }  
    
  return 0;
}