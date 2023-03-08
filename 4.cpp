#include<iostream>
#include<iomanip>
#include<vector>
#include<map>

using namespace std;

int main(){
    int a,b,remain,quotient;
    cin >> a >> b;
    cout << a << "+" << b << "=" << a+b << endl ;
    cout << a << "*" << b << "=" << a*b << endl ;
    cout << a << "-" << b << "=" << a-b << endl ;
    quotient=a/b;
    remain=a%b;
    if(a%b<0){
        if(b>0){
            remain+=b;
        }
        else{
            remain-=b;
        }
        if(b<0){
            quotient++;
        }
        else{
            quotient--;
        }
    }
    cout << a << "/" << b << "=" << quotient << "..." << remain << endl ;
}

//被除 = 除 * 商 + 餘 若餘<0  被除 = 除 * 商-1 + ( 餘+ |除|)