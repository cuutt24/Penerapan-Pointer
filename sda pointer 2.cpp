#include <iostream>
#include <string>
using namespace std;

int main (){
	
	int a = 10;
	int b = 15;
	int c = 27;
	cout << "nilai a: " << a << "\n";
	cout << "nilai b: " << b << "\n";
	cout << "nilai c: " << c << "\n";
	int* p1 = &a;
	int* p2 = &b;
	cout << "alamat p1: " << p1 << "\n";
	cout << "alamat p2: " << p2 << "\n";
	*p1 = c;
	cout << "nilai p1: " << *p1 << "\n";
	a = *p2;
	cout << "nilai a: " << *p2 << "\n";
	b = 6 ;
	cout << "nilai b: " << b << "\n";
	int* p3 = &b;
	cout << "alamat p3: " << p3 << "\n";
	p3 = &c;
	cout << "alamat p3: " << p3 << "\n";
	*p1 = *p3;
	cout << "nilai p1: " << *p1 << "\n";
}
