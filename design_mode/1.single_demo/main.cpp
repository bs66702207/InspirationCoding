#include <iostream>
#include "SingleDemo.h"

class TogetherSingle : public SingleDemo{

private: 
	TogetherSingle() {
	}
	static TogetherSingle* ts_Instance;

public:
	static TogetherSingle* getInstance() {
		if(ts_Instance == NULL)
			ts_Instance = new TogetherSingle();
		return ts_Instance;
	}

};

TogetherSingle* TogetherSingle::ts_Instance = NULL;


int main(int argc, char* argv[])
{
	SingleDemo *sd;
	sd = SingleDemo::getInstance();
	sd->testFunc();

	TogetherSingle* ts;
	ts = TogetherSingle::getInstance();
	ts->testFunc();

	return 0;
}
