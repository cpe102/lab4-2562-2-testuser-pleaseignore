#include<iostream>
#include<cmath>

using namespace std;

double cal_y(double x,double e){
    x = (3*(pow(x,3))) + (2*e) + (pow(2,(2*x+1)))+ (sqrt((pow(x,2))+1));
    return x;

}
int main (){
	double x,y;
	const double e = 2.71828;
	cout << "Enter x= ";
	cin >> x; 
	cout << "Result y = " << cal_y(x,e) ;
}
