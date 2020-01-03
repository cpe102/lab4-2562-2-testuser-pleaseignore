#include<iostream>
#include<cmath>

using namespace std;

int findDivisor(int n){
    int i = 2 ;
    while (i <= n){
        if(n % i == 0)
            return i;
        i++;
    }
        
    }

int main(){
    int x;
    cout << "Input number : ";
    cin >> x;
    cout  << "Result : "<< findDivisor(x);
}
