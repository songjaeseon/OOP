#include "bike.h"

bike::bike(){
	this->bike_name = nullptr;
	this->bike_number = 0;
}
bike::bike(int number, int speed){
	this->wheel_number = number;
	this->max_speed = speed;
}
bike::bike(int number, int speed, char* b_name){
	this->wheel_number = number;
	this->max_speed = speed;
	this->bike_name = b_name;
}	
bike::bike(int number, int speed, char* b_name, int b_number){
	this->wheel_number = number;
	this->max_speed = speed;
	this->bike_name = b_name;
	this->bike_number = b_number;
}
bike::bike(int number, int speed, char* b_name, int b_number, bool name){
	this->wheel_number = number;
	this->max_speed = speed;
	this->bike_name = b_name;
	this->bike_number = b_number;
	this->has_name = name;
}
int bike::get_bike_number(){return this->bike_number;}
char* bike::get_bike_name(){return this->bike_name;}
const char* bike::get_class_name(){return "bike";}
void bike::set_bike_name(char* newBike_name){ this->bike_name = newBike_name;}
void bike::set_bike_number(int newBike_number){ this->bike_number = newBike_number;}
