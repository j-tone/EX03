#include <iostream>
#include <string>
#include "QuadraticEquation.h"
using namespace std;

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