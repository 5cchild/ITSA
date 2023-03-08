#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<cmath>

using namespace std;

int main(){
    int a,b,c=0;
    cin >> a >> b;
    for(int i=a;i<b+1;i++){
        c+=i;
    }
    cout << c << endl;
}