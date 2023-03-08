#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<cmath>

using namespace std;

int main(){
    int a;
    cin >> a;
    double b;
    b=(double)a;
    if(a>=1500){
        b*=0.9;
        b*=0.79;
    }
    else if((1500>a)&&(a>800)){
        b*=0.9;
        b*=0.9;
    }
    else{
        b*=0.9;
    }
    cout << fixed << setprecision(1) << b << endl;
}