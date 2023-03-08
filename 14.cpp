#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<cmath>

using namespace std;

int main(){
    int a,b,c,d,e;
    cin >> a;
    b=a/(60*60*24);
    c=a%(60*60*24)/(60*60);
    d=a%(60*60*24)%(60*60)/60;
    e=a%(60*60*24)%(60*60)%60;
    cout << b << " days" << endl << c << " hours" << endl << d << " minutes" << endl << e << " seconds" << endl;
}