#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int a;
    scanf("%d",&a);
    for(int i=1;i<a+1;i++){
        printf("%d*%d=%d\n",i,i,i*i);
    }
}
