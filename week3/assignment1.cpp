#include <iostream>
int data = 1; //BSS와 구분하기위해 초기화 된 전역변수를 선언
int bss; //초기화되지 않은 전역변수 선언
void code(); //실행해야 할 함수

int main(){	
	static const int rodata = 1; //변경되지 않는 상수값을 rodata에 저장
	int* heap = new int(3); // new연산자를 사용하여 메모리를 할당(Heap)
	int stack = 1; 

	std::cout << "code\t" << (void*) code << std::endl;
	std::cout << "Rodata\t" <<  (void*) &rodata << std::endl;
	std::cout << "data\t" << &data << std::endl;
	std::cout << "BSS\t" << &bss << std::endl;
	std::cout << "HEAP\t" << heap << std::endl;
	std::cout << "Stack\t" << &stack << std::endl;
}

void code(){
	int a = 0;
}
