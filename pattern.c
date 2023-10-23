#include <stdio.h>

int main() {
    for(int i=1;i<6;i++){
        for(int j=1;j<10;j++){
            if((j-i)>=(i-1)){
                printf("*");
            }else {printf(" ");}
            } 
            printf("\n");
    }
    
    for(int i=4;i>0;i--){
        for(int j=1;j<10;j++){
            if((j-i)>=(i-1)){
                printf("*");
            }else {printf(" ");}
            }
            printf("\n");
    }

    return 0;
}
