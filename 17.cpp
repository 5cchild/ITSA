#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<cmath>

using namespace std;

int main(){
    int a,b,ans=1,i=2;
    cin >> a >> b;
    if( a==1 || b==1 ) {
        cout << 1 << endl;
    }
    else if( a>=i && b>=i )
    {
          while( a>=i && b>=i ) 
          { 
               while( a%i==0 && b%i==0 ) 
               { 
                    ans = ans * i; 
                    a /= i; 
                    b /= i; 
               } 
               i++; 
          } 
          cout << ans << endl;
    }
}