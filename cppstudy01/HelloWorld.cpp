#include "cppstudy01.h"

using namespace std;

HelloWorld::HelloWorld() {
	mMessage = "HelloWorld!!";
};

HelloWorld::~HelloWorld() {
};

/*
* 画面にmMessageの内容を表示する。
*/
void HelloWorld::say() {
	printf(mMessage.c_str());
};
