#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<cmath>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if((a<=100)&&(0<=b)&&(0<=a)&&(b<=100)){
        cout << "inside" << endl;
    }
    else{
        cout << "outside" << endl;
    }
}