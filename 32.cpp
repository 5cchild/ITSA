#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<cmath>

using namespace std;

int main(){
    int a,b,c,d;
    cin >> a;
    b=a/100;
    c=(a%100)/10;
    d=(a%100)%10;
    if((b*b*b+c*c*c+d*d*d)==a){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}