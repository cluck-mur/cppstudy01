#include "cppstudy01.h"

using namespace std;

speaker::speaker() {
	mMessage = "HelloWorld!!";
};

speaker::~speaker() {
};

/*
* 画面にmMessageの内容を表示する。
*/
void speaker::speak() {
	printf(mMessage.c_str());
};
