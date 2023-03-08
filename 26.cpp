#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<cmath>

using namespace std;

int main(){
    int a;
    cin >> a;
    for(int i=1;i<a+1;i++){
        cout << i << "*" << i << "=" << i*i << endl;
    }
}