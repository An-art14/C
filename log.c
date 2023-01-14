#include <stdio.h>

int main() {
    double x, y;
    scanf("%lf %lf", &x,&y);
    int c ;
    printf("%d\n", c=(((x>0 && y>0)*1)+((x<0 && y<0)*3)+((x<0 && y>0)*2))+((x>0 && y<0)*4));

    /*switch (x>0 && y>0) {
        case 1 : printf("%d\n", 1);break;
        case 0 : 
        switch (x<0 && y<0)  {
            case 1 : printf("%d\n", 3);break;
            case 0 : 
            switch (x<0 && y>0) {
                case 1 : printf("%d\n",2);break;
                case 0 : 
                switch (x>0 && y<0) {
                    case 1 : printf("%d\n",4);break;

                   }
                   }
        } 
                      }*/
                


    

return 0;
        }