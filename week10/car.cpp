#include "car.h"

car::car(){
	this->car_name = nullptr;
}
car::car(int number, int speed){
	this->wheel_number = number;
	this->max_speed = speed;
}
car::car(int number, int speed, char* c_name){
	this->wheel_number = number;
	this->max_speed = speed;
	this->car_name = c_name;
}     
car::car(int number, int speed, char* c_name, bool name){
	this->wheel_number = number;
	this->max_speed = speed;
	this->car_name = c_name;
	this->has_name = name;
}
char* car::get_car_name(){ return this->car_name;}
const char* car::get_class_name(){return "car";}
void car::set_car_name(char* newCar){this->car_name = newCar;}
	


