#include "cppstudy01.h"

using namespace std;

HelloWorld::HelloWorld() {
	mMessage = "HelloWorld!!";
};

HelloWorld::~HelloWorld() {
};

/*
* ��ʂ�mMessage�̓��e��\������B
*/
void HelloWorld::say() {
	printf(mMessage.c_str());
};
