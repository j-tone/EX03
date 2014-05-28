#include <string>
using namespace std;

class Fan{
private:
	int speed;
	double radius;
	bool on;

public:
	int GetSpeed();
	double GetRadius();
	string GetOn();
	void SetSpeed(int newspeed);
	void SetRadius(double newradius);
	void SetOn(bool power);
	Fan();
};