#include <iostream>
using namespace std;

void printNumber (int x){
	cout << "I am printing an integer number " << x << endl;
}

void printNumber (float x){
	cout << "I am printing an float number " << x << endl;
}

int main() {
	
	int a = 54;
	float b = 32.1231;
	
	printNumber(a);
	printNumber(b);
} 
