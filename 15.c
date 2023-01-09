#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int a,b;
    scanf("%d%d",&a,&b);
    if((a<=100)&&(0<=b)&&(0<=a)&&(b<=100)){
        printf("inside\n");
    }
    else{
        printf("outside\n");
    }
}