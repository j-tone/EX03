#include <string>
class MyInteger{
private:
	int value;
public:
	MyInteger(int v);
	int getValue() const;
	bool isEven() const;
	bool isOdd() const;
	bool isPrime() const;
	static bool isEven(int v);
	static bool isOdd(int v);
	static bool isPrime(int v);
	static bool isEven(const MyInteger& i);
	static bool isOdd(const MyInteger& i);
	static bool isPrime(const MyInteger& i);
	bool equals(int v) const;
	bool equals(const MyInteger& i);
	//static int parseInt(const string&);
	//I have no idea where the heck they want me to get this string from