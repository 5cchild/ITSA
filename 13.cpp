#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<cmath>

using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    a=60*(c-a)+(d-b);
    if(a>=240){
        b=(a-240)/30*60+280;
    }
    else if(240>a>=120){
        b=(a-120)/30*40+120;
    }
    else{
        b=a/30*30;
    }
    cout << b << endl;
}