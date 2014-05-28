#include <iostream>
#include <string>
#include "Fan.h"
using namespace std;

int main()
{
	Fan smallfan, bigfan;
	bigfan.SetSpeed(3);
	bigfan.SetRadius(10);
	bigfan.SetOn(true);

	smallfan.SetSpeed(2);
	smallfan.SetOn(false);

	cout << "So, the big fan is running at a speed of " << bigfan.GetSpeed() << ",\n"
		"and its radius is a size of " << bigfan.GetRadius() << ".\n";
	cout << bigfan.GetOn() << endl << endl;
	cout << "And this little fan is running at a speed of " << smallfan.GetSpeed() << ",\n"
		"and its radius is a size of " << smallfan.GetRadius() << ".\n";
	cout << smallfan.GetOn() << endl << endl;
}