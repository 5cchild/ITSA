#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<cmath>

using namespace std;

int is_prime(int num);

int main (){
    int a;
    cin >> a;
    for(int i=a-1;i>0;i--){
        if(is_prime(i)){
            cout << i << endl;
            break;
        }
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