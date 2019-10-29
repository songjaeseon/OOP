//
// Created by 김혁진 on 14/10/2019.
//

#include "unique_immut.h"

namespace ptr {
unique_immut::unique_immut() {
    _mgr = new mgr();
}

unique_immut::unique_immut(Object *obj) {
    _mgr = new mgr(obj);
}

unique_immut::unique_immut(const unique_immut &immut) {
    if (immut._mgr) {
        int val = immut._mgr->ptr->get();
        _mgr = new mgr(val);
    }
}

unique_immut::~unique_immut() {
    release();
}
void unique_immut::release(){
	if(this->_mgr->ptr != nullptr){
		delete this->_mgr;
	}
}
Object* unique_immut::get() const{
	if(this->_mgr != nullptr){
		return nullptr;
	}
	return this->_mgr->ptr;	
}

unique_immut unique_immut:: operator+(unique_immut &unique){
	release();

}
unique_immut unique_immut:: operator-(unique_immut &unique){
	release();
}
unique_immut unique_immut:: operator*(unique_immut &unique){
	release();
}
unique_immut unique_immut:: operator/(unique_immut &unique){
	release();
}
Object* unique_immut:: operator->(){
	return this->_mgr->ptr;
}
unique_immut& unique_immut::operator=(unique_immut& r){
	
}	
} // end of namespace ptr
