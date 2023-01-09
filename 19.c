#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int a;
    double b;
    scanf("%d",&a);
    b=(double)a;
    if(a>=1500){
        b*=0.9;
        b*=0.79;
    }
    else if((1500>a)&&(a>800)){
        b*=0.9;
        b*=0.9;
    }
    else{
        b*=0.9;
    }
    printf("%.1lf\n",b);
}
