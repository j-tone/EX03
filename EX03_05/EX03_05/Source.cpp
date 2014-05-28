#include <iostream>
#include <string>
#include "MyInteger.h"
using namespace std;

int main()
{
	int q;
	cin >> q;
	MyInteger A(q);
	cout << "isEven: " << A.isEven() << endl;
	cout << "isOdd: " << A.isOdd() << endl;
	cout << "isPrime: " << A.isPrime() << endl;
	cout << "getValue: " << A.getValue() << endl;
	//cout << "equals: " << A.equals(q) << endl; This one isn't working for whatever reason
	cout << isEven(A) << endl;
	cout << isOdd(A) << endl;
	cout << isPrime(A) << endl;
	cout << isEven(q) << endl;
	cout << isOdd(q) << endl;
	cout << isPrime(q) << endl;
}