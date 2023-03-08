#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<cmath>

using namespace std;

int main(){
    int a,b,c,d;
    cin >> a;
    b=a/10;
    c=(a%10)/5;
    d=((a%10)%5);
    cout <<"NT10=" << b << endl << "NT5=" << c << endl <<"NT1=" << d << endl;
}