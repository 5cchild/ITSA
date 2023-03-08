#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<cmath>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if((a*a+b*b)<=10000){
        cout << "inside" << endl;
    }
    else{
        cout << "outside" << endl;
    }
}