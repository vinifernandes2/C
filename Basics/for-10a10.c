#include <stdio.h>

int main(void){
    int i;

    i = -10;
    while(i <= 10){
        printf("while: %d\n", i);
        i = i + 1;   
    }

    i = -10;
    do{
        printf("doWhile: %d\n", i);
        i = i + 1;
    }while(i <= 10);

    for(i=-10; i<=10; i=i+1){
        printf("for: %d\n", i);
    }

    return 0;
}