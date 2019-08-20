#include<iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int mult(int a, int b) {
	return a * b;
}

int main() {
	int a, b;
	cout << "\n\tEnter A : ";
	cin >> a;
	cout << "\n\tEnter B : ";
	cin >> b;
	cout << "Addition : " << add(a, b) << "\n"
	     << "Sub : " << sub(a, b) << "\n"
             << "Mul : " << mult(a, b) << "\n";
	return 0;
}
