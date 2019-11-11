#ifndef CAR_H
#define CAR_H

#include "vehicle.h"
class car : public vehicle {
private:
	char* car_name;

public:
	car();
	car(int number, int speed);
	car(int number, int speed, char* c_name);
	car(int number, int speed, char* c_name, bool name);
	char* get_car_name();	
	const char* get_class_name();
	void set_car_name(char* newCar);
};	
#endif
