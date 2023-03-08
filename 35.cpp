#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<cmath>

using namespace std;

int main(){
    int a;
    cin >> a;
    if((a%400)==0){
        cout << "Bissextile Year" << endl;
        return 0;
    }
    if((a%100)==0){
        cout << "Common Year" << endl;
        return 0;
    }
    if((a%4)==0){
        cout << "Bissextile Year" << endl;
    }
    else{
        cout << "Common Year" << endl;
    }
}