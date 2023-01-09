#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int a;
    scanf("%d",&a);
    if((a<=5)&&(3<=a)){
        printf("Spring\n");
    }
    else if((a<=8)&&(6<=a)){
        printf("Summer\n");
    }
    else if((a<=11)&&(9<=a)){
        printf("Autumn\n");
    }
    else{
        printf("Winter\n");
    }
}


