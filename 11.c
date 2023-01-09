#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int a,b,c,d;
    scanf("%d",&a);
    b=a/10;
    c=(a%10)/5;
    d=((a%10)%5);
    printf("NT10=%d\nNT5=%d\nNT1=%d\n",b,c,d);
}

