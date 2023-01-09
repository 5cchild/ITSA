#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int a, b;
    scanf("%d %d",&a,&b);
    if((a*b)>=0){
        if((a%b)>0){
            printf("%d+%d=%d\n%d*%d=%d\n%d-%d=%d\n%d/%d=%d...%d\n",a,b,a+b,a,b,a*b,a,b,a-b,a,b,a/b,a%b);
        }
        else if((a%b)==0){
            printf("%d+%d=%d\n%d*%d=%d\n%d-%d=%d\n%d/%d=%d...%d\n",a,b,a+b,a,b,a*b,a,b,a-b,a,b,a/b,0);
        }
    }
    else{
        if(b<0){
            printf("%d+%d=%d\n%d*%d=%d\n%d-%d=%d\n%d/%d=%d...%d\n",a,b,a+b,a,b,a*b,a,b,a-b,a,b,a/b,-(b*(a/b)-a));
        }
        else{
            printf("%d+%d=%d\n%d*%d=%d\n%d-%d=%d\n%d/%d=%d...%d\n",a,b,a+b,a,b,a*b,a,b,a-b,a,b,a/b-1,-(b*(a/b-1)-a));
        }
    }
}