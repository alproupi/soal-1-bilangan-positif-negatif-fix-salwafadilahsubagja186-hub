#include <stdio.h>
#include <stdlib.h>
int main(){
    int bilangan;

    printf ("masukan_bilangan");
    scanf ("%d",&bilangan);

    if (bilangan > 0){
        printf("positf");
    }
    else if (bilangan < 0){
        printf ("negatif");
    }
    else{
        printf ("nol");
    }
    return 0;
}