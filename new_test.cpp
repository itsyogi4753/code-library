#include<iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int main() {
	int var;
	cin >> var;
	cout << var << endl;
	int var2;
	cin >> var2; 
	cout << add(var, var2) << endl; 
	return 0;
}
