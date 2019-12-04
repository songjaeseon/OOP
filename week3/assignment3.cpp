#include <iostream>

int main(){
	char target[] = "Song JaeSeon"; //12byte차지
	long b[16]; //16*8
	int a = 17; //4byte차지
	int i = 164; //4byte차지
	int *c = new int[602];  //동적할당 heap에 저장되어 1byte차지
	char * copy = "is no no"; //8byte 차지
	char name = 'a'; // 1byte차지
	std::cout << &name+i << std::endl;
}	
 
