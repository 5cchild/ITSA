#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int a, b, c;
    double d;
    scanf("%d %d %d",&a,&b,&c);
    d=((double)a + (double)b)*(double)c/2;
    printf("Trapezoid area:%.1lf\n",d);
}