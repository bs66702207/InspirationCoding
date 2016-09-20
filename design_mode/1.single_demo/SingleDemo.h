#ifndef SIGNLE_DEMO
#define SIGNLE_DEMO

class SingleDemo {

protected:
	SingleDemo(void);
private: 
	static SingleDemo* sdInstance;

public:

	static SingleDemo* getInstance(void);
	void testFunc(void);

};
#endif
