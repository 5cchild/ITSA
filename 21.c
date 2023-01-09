#include<stdio.h>

int main (){
    int a;
    long long int b=1;
    scanf("%d",&a);
    for(int i=2;i<a+1;i++){
        b*=i;
    }
    printf("%llu\n",b);
}

