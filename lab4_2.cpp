#include<iostream>
#include<cmath>

using namespace std;

double findDistance(double u,double a, double t){
  return u*t + 0.5*a*t*t ;
}


int main(){
  float a,t,u;

	cout << "Enter u (m/s) = " ;
	cin >> u;
  cout << "Enter a (m/s^2) = " ;
	cin >> a ;
	cout << "Enter t (s) = ";
	cin >> t;
  cout << "Distance = " << findDistance(u,a,t) <<endl;
  return 0;
}
