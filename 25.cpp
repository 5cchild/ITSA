#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<cmath>

using namespace std;

int main(){
    int a,b=0;
    cin >> a;
    for(int i=0;i<a+1;i++){
        if((i%3)==0){
            b+=i;
        }
    }
    cout << b << endl;
}