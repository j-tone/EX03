#include <string>
class QuadraticEquation{
public:
	QuadraticEquation(int A, int B, int C);
	QuadraticEquation(){};
private:
	int a, b, c;
public:
	int GetA();
	int GetB();
	int GetC();
	int GetDiscriminant();
	double GetRoot1();
	double GetRoot2();
};
