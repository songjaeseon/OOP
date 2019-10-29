//
// Created by 김혁진 on 14/10/2019.
//

#include "shared_mut.h"

namespace ptr {
shared_mut::shared_mut() {
   	_mgr = new mgr();
}

shared_mut::shared_mut(Object* _obj) {
   	 _mgr = new mgr(_obj);
}

shared_mut::~shared_mut() {
   	 release();
}
void shared_mut::release() {
	(this->_mgr->count)--;
	if(this->_mgr->count == 0){
		delete (this->_mgr);
		this->_mgr = nullptr;
	}	
}
Object* shared_mut::get() const{
	if(this->_mgr->ptr == nullptr){
		return nullptr;
	}
	return this->_mgr->ptr;
}
int shared_mut::count(){
	return this->_mgr->count;
}
void shared_mut::increase(){
	(this->_mgr->count)++;	
}
shared_mut shared_mut:: operator+(const shared_mut &shared){
	return shared_mut(new Object((*(this->_mgr->ptr)).get()+(*(shared._mgr->ptr)).get()));
}
shared_mut shared_mut:: operator-(const shared_mut &shared){
	return shared_mut(new Object((*(this->_mgr->ptr)).get()-(*(shared._mgr->ptr)).get()));
}
shared_mut shared_mut:: operator*(const shared_mut &shared){
	return shared_mut(new Object((*(this->_mgr->ptr)).get() * (*(shared._mgr->ptr)).get()));
}
shared_mut shared_mut:: operator/(const shared_mut &shared){
	return shared_mut(new Object((*(this->_mgr->ptr)).get()/ (*(shared._mgr->ptr)).get()));
}
shared_mut&shared_mut:: operator=(const shared_mut &r){
	
}
Object* shared_mut:: operator->(){
	return this->_mgr->ptr;
}

}// end of namespace ptr
