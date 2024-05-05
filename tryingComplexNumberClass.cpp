//============================================================================
// Name        : VectorClass.cpp
// Author      : narjes
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
class ComplexNumber {
private:
	int x;
	int y;
public :
	ComplexNumber(int a = 0, int b =0):x(a),y(b){}
	ComplexNumber operator+(ComplexNumber& other){
		return ComplexNumber(x+other.x,y+other.y);
	}
	friend ostream& operator<<(ostream&, ComplexNumber&);
	friend istream& operator>>(istream&, ComplexNumber&);
};

ostream& operator<<(ostream& out, ComplexNumber& n){
	out<<"complexNumber is :\n";
	out<<n.x<<"+"<<n.y<<"i";
	return out;
}
istream& operator>>(istream& in, ComplexNumber& n){
	cout<<"enter x"<<endl;
	in>>n.x;
	cout<<"enter y"<<endl;
	in>>n.y;
	return in;

}
int main() {
	ComplexNumber n;
	cin>>n;
	cout<<n;
	ComplexNumber sum = n+n;
	cout<<sum;
	return 0;
}
