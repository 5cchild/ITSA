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
    if(is_prime(a)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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