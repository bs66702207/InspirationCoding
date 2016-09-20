#include <iostream>
#include "SingleDemo.h"
using namespace std;

SingleDemo::SingleDemo(void) {
}

SingleDemo* SingleDemo::sdInstance = NULL;

SingleDemo* SingleDemo::getInstance(void) {
	if(sdInstance == NULL) {
		sdInstance = new SingleDemo();
	}
	return sdInstance;
}

void SingleDemo::testFunc(void) {
	cout<<"hello this is test single!"<<endl;
}
