#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int num);

int main (){
    int a;
    scanf("%d",&a);
    if(is_prime(a)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}

int is_prime(int num){
	if(num==1){
		return 0;
	}else{
		for(int i=2;i<num;i++){
			if(num%i==0){
				return 0;
			}
		}
	}
	return 1;
}