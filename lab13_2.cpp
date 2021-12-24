#include<iostream>
using namespace std;

int gcd(int x , int y);

int main(){
    int x, y;
    x = 15;
    y = 25;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}


int gcd(int x , int y){
    if (x%y == 0) return y;
    else return gcd(y,x%y);
    
}
