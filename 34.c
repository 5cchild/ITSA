#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int a;
    scanf("%d",&a);
    for(int i=1;i<a+1;i++){
        if((a%i)==0){
            printf("%d",i);
            if(i!=a){
                printf(" ");
            }
        }
    }
    putchar('\n');
}
