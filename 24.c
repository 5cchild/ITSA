#include<stdio.h>

int main (){
    int a,b;
    scanf("%d%d",&a,&b);
    double c;
    if(a>120){
        c=b*60.0+b*60*1.33+b*(a-120)*1.66;
    }
    else if((120>=a)&&(a>60)){
        c=b*60.0+b*(a-60)*1.33;
    }
    else{
        c=a*60.0;
    }
    printf("%.1lf\n",c);
}