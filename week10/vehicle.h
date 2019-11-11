#ifndef VEHICLE_H
#define VEHICLE_H
class vehicle
{
protected:
	bool has_name;
	int wheel_number;
	int max_speed;

public:
	vehicle();
	vehicle(int number, int speed);
	vehicle(int number, int speed, bool name);	
	int get_wheel_number();
	int get_max_speed();
	bool get_has_name();
	const char* get_class_name();

	void set_wheel_number(int newWheel_number);
	void set_max_speed(int newMax_speed);
	void set_has_name(bool newHas_name);
};
#endif



