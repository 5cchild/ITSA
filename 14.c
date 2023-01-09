#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int a,b,c,d,e;
    scanf("%d",&a);
    b=a/(60*60*24);
    c=a%(60*60*24)/(60*60);
    d=a%(60*60*24)%(60*60)/60;
    e=a%(60*60*24)%(60*60)%60;
    printf("%d days\n%d hours\n%d minutes\n%d seconds\n",b,c,d,e);
}
