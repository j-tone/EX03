#include "MyInteger.h"

MyInteger::MyInteger(int v){
	value = v;
}
int MyInteger::getValue() const{
	return value;
}
bool MyInteger::isEven() const{
	if ((value % 2) == 0){
		return true;
	}
	else
		return false;
}
bool MyInteger::isOdd() const{
	if ((value % 2) == 1){
		return true;
	}
	else
		return false;
}
bool MyInteger::isPrime() const{
	for (int i = 0; i < value; i++){
		if ((value % i) == 0)
			return false;
		else
			return true;
	}
}
static bool isEven(int v){
	if ((v % 2) == 0){
		return true;
	}
	else
		return false;
}
static bool isOdd(int v){
	if ((v % 2) == 1){
		return true;
	}
	else
		return false;
}
static bool isPrime(int v){
	for (int i = 0; i < v; i++){
		if ((v % i) == 0)
			return false;
		else
			return true;
	}
}
static bool isEven(const MyInteger& i){
	if ((i.getValue() % 2) == 0){
		return true;
	}
	else
		return false;
}
static bool isOdd(const MyInteger& i){
	if ((i.getValue() % 2) == 1){
		return true;
	}
	else
		return false;
}
static bool isPrime(const MyInteger& i){
	for (int j = 0; j < i.getValue(); j++){
		if ((i.getValue() % j) == 0)
			return false;
		else
			return true;
	}
}
bool MyInteger::equals(int v) const{
	if (v == value)
		return true;
	else
		return false;
}
bool MyInteger::equals(const MyInteger& i){
	if (i.getValue() == value)
		return true;
	else
		return false;
}
//static int parseInt(const string& s){
//	return int atoi(s[s.size]);
//}