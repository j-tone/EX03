#include <iostream>
#include <string>

using namespace std;

class Fan{
private:
	int speed;
	double radius;
	bool on;

public:
	int GetSpeed(){
		return speed;
	}
	double GetRadius(){
		return radius;
	}
	string GetOn(){
		if (on = false)
			return "This fan is not on.";
		else
			return "This fan is on.";
	}

	void SetSpeed(int newspeed){
		if (newspeed <= 0){
			speed = 1;
		}
		else if (newspeed >= 3){
			speed = 3;
		}
		else
			speed = newspeed;
	}
	void SetRadius(double newradius){
		radius = ((newradius >= 0) ? newradius : 0);
	}
	void SetOn(bool power){
		on = power;
	}

	Fan(){
		speed = 1;
		on = false;
		radius = 5;
	}
};

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