#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float a;
    scanf("%f",&a);
    printf("%d\n",(int)(a*100/(100-30*2.54)+0.999));
}

