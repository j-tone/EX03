#include "QuadraticEquation.h"
QuadraticEquation::QuadraticEquation(int A, int B, int C){
	a = A;
	b = B;
	c = C;
}

int QuadraticEquation::GetA(){
	return a;
}
int QuadraticEquation::GetB(){
	return b;
}
int QuadraticEquation::GetC(){
	return c;
}
int QuadraticEquation::GetDiscriminant(){
	return ((b*b) - (4 * (a*c)));
}

double QuadraticEquation::GetRoot1(){
	if (GetDiscriminant() >= 0){
		return ((static_cast<double>(-b) + sqrt(GetDiscriminant())) / (2 * a));
	}
	else
		return 0;
}
double QuadraticEquation::GetRoot2(){
	if (GetDiscriminant() >= 0){
		return ((static_cast<double>(-b) - sqrt(GetDiscriminant())) / (2 * a));
	}
	else
		return 0;
}