#include<iostream>
#include<iomanip>
#include<vector>
#include<map>

using namespace std;

int main(){
    double a,b,c;
    cin >> a >> b >> c; 
    cout << fixed << setprecision(1) << "Trapezoid area:" << (a+b)*c/2 << endl;
}