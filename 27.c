#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int a,b,c=0;
    scanf("%d%d",&a,&b);
    for(int i=a;i<b+1;i++){
        c+=i;
    }
    printf("%d\n",c);
}
