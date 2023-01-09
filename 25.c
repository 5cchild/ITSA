#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int a,b=0;
    scanf("%d",&a);
    for(int i=0;i<a+1;i++){
        if((i%3)==0){
            b+=i;
        }
    }
    printf("%d\n",b);
}

