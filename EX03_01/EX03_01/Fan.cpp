#include "Fan.h"

int Fan::GetSpeed(){
	return speed;
}
double Fan::GetRadius(){
	return radius;
}
string Fan::GetOn(){
	if (on == false){
		return ("This fan is not on.");
	}
	else{
		return ("This fan is on.");
	}
}

void Fan::SetSpeed(int newspeed){
	if (newspeed <= 0){
		speed = 1;
	}
	else if (newspeed >= 3){
		speed = 3;
	}
	else
		speed = newspeed;
}
void Fan::SetRadius(double newradius){
	radius = ((newradius >= 0) ? newradius : 0);
}
void Fan::SetOn(bool power){
	on = power;
}

Fan::Fan(){
	speed = 1;
	on = false;
	radius = 5;
}