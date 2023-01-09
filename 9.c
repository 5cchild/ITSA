#include<stdio.h>
#include <stdlib.h>

int main (){
    int a,b=1;
    scanf("%d",&a);
    if(a<31){
        for(int i=0;i<a;i++){
            b*=2;
        }
        printf("%d\n",b);
    }
    else{
        printf("Value of more than 31\n");
    }
}
