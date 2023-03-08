#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<cmath>

using namespace std;

int main(){
    float a;
    cin >> a;
    cout << (int)(a*100/(100-30*2.54)+0.999) << endl;
}   