#include <iostream>
#include <string>

using namespace std;

class QuadraticEquation{
public:
	QuadraticEquation(int A, int B, int C){
		a = A;
		b = B;
		c = C;
	}
	QuadraticEquation(){}

private:
	int a, b, c;
public:
	int GetA(){
		return a;
	}
	int GetB(){
		return b;
	}
	int GetC(){
		return c;
	}
	int GetDiscriminant(){
		return ((b*b) - (4 * (a*c)));
	}

	double GetRoot1(){
		if (GetDiscriminant() >= 0){
			return ((static_cast<double>(-b) + sqrt(GetDiscriminant())) / (2 * a));
		}
		else
			return 0;
	}
	double GetRoot2(){
		if (GetDiscriminant() >= 0){
			return ((static_cast<double>(-b) - sqrt(GetDiscriminant())) / (2 * a));
		}
		else
			return 0;
	}
};

int main()
{
	string retry;
	do{
		int x = 0, y = 0, z = 0;
		cout << "Enter a value for a: ";
		cin >> x;
		cout << "Enter a value for b: ";
		cin >> y;
		cout << "Enter a value for c: ";
		cin >> z;

		QuadraticEquation Q(x, y, z);

		if (Q.GetDiscriminant() > 0){
			cout << "Your roots are " << Q.GetRoot1() << " and " << Q.GetRoot2() << ".\n";
		}
		else if (Q.GetDiscriminant() == 0){
			cout << "You have one root, and that's " << Q.GetRoot1() << ".\n";
		}
		else
			cout << "Bro, you got no real roots." << endl << endl;
		
		cout << "Wanna give it another go?\n";
		cin >> retry;
		cout << endl;
	} while ((retry == "y") || (retry == "yes") || (retry == "Y") || (retry == "Yes") || (retry == "Definitely"));

}