#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int a,b,c,d;
    scanf("%d",&a);
    b=a/100;
    c=(a%100)/10;
    d=(a%100)%10;
    if((b*b*b+c*c*c+d*d*d)==a){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}

