#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int a,order=0;
    scanf("%d",&a);
    int ary[a+1];
    for(int i=0;i<a+1;i++){
        ary[i]=0;
    }
    for(int i=1;i<a+1;i++){
        int b=0;
        for(int j=1;j<i;j++){
            if((i%j)==0){
                b+=j;
            }
        }
        if(i==b){
            ary[order]=i;
            order++;
        }
    }
    for(int i=0;i<a;i++){
        if(ary[i]!=0){
            printf("%d",ary[i]);
        }
        if(ary[i+1]!=0){
            printf(" ");
        }
    }
    putchar('\n');
}