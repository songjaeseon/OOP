#ifndef BIKE_H
#define BIKE_H
#include "vehicle.h"

class bike : public vehicle
{
private: 
	char* bike_name;
	int bike_number;

public: 
	bike();
	bike(int number, int speed);
	bike(int number, int speed, char* b_name);
	bike(int number, int speed, char* b_name, int b_number);
	bike(int number, int speed, char* b_name, int b_number, bool name);
	int get_bike_number();
	char* get_bike_name();	
	const char* get_class_name();
	void set_bike_name(char* newBike_name);
        void set_bike_number(int newBike_number);	
};
#endif
