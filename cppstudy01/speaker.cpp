#include "cppstudy01.h"

using namespace std;

speaker::speaker() {
	mMessage = "HelloWorld!!";
};

speaker::~speaker() {
};

/*
* ��ʂ�mMessage�̓��e��\������B
*/
void speaker::speak() {
	printf(mMessage.c_str());
};
