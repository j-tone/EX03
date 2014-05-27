#include <iostream>

using namespace std;

class EvenNumber{
public:
	EvenNumber(){
		value = 0;
	}
	EvenNumber(int e){
		if ((e % 2) == 0){
			value = e;
		}
		else
			value = e + 1;
	}

private:
	int value;
public:
	int GetValue(){
		return value;
	}
	int GetNext(){
		return (value + 2);
	}
	int GetPrevious(){
		return (value - 2);
	}
};

int main()
{
	EvenNumber Y(16);
	cout << "For the even number " << Y.GetValue() << ", the next even number is " << Y.GetNext() << "\nand the previous even value is " << Y.GetPrevious() << ".\n\n";
	int e;
	cout << "Now you can enter any even number!"
		"\n(Any odd number entered will automaically be moved to the next even number.)\n";
	cin >> e;

	EvenNumber E(e);
	cout << "The current even number is: " << E.GetValue() << ".\n";
	cout << "The next consecutive even number is: " << E.GetNext() << ".\n";
	cout << "The previous consecutive even number is: " << E.GetPrevious() << ".\n";
}