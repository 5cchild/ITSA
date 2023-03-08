#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<cmath>

using namespace std;

int main(){
    int a;
    long long int b=1;
    cin >> a;
    for(int i=2;i<a+1;i++){
        b*=i;
    }
    cout << b << endl;
}