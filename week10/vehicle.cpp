#include "vehicle.h"

vehicle::vehicle(){
	this->has_name = false;
}
vehicle::vehicle(int number, int speed){
	this->wheel_number = number;
	this->max_speed = speed;
}
vehicle::vehicle(int number, int speed, bool name){
	this->wheel_number = number;
	this->max_speed = speed;
	this->has_name = name;
}	
int vehicle::get_wheel_number(){ return this->wheel_number;}
int vehicle::get_max_speed(){return this->max_speed;}
bool vehicle::get_has_name(){return this->has_name;}
const char* vehicle::get_class_name(){return "vehecle";}

void vehicle::set_wheel_number(int newWheel_number){ this->wheel_number = newWheel_number;}
void vehicle::set_max_speed(int newMax_speed){ this->max_speed = newMax_speed; }
void vehicle::set_has_name(bool newHas_name){ this->has_name = newHas_name;}




