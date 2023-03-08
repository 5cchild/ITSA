#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<cmath>

using namespace std;

int main(){
    int a,ans=1;
    cin >> a;
    if(a<31){
        for(int i=0;i<a;i++){
            ans*=2;
        }
        cout << ans << endl ;
    }
    else if(a>31){
        cout << "Value of more than 31" << endl;
    }
}