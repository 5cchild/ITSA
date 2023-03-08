#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<cmath>

using namespace std;

int main(){
    int a;
    cin >> a;
    if((a<=5)&&(3<=a)){
        cout << "Spring" << endl;
    }
    else if((a<=8)&&(6<=a)){
        cout << "Summer" << endl;
    }
    else if((a<=11)&&(9<=a)){
        cout << "Autumn" << endl;
    }
    else{
        cout << "Winter" << endl;
    }
}