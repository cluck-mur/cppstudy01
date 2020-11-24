#include "cppstudy01.h"

using namespace std;

HelloWorld::HelloWorld() {
	mMessage = "HelloWorld!!";
};

HelloWorld::~HelloWorld() {
};

/*
* ‰æ–Ê‚ÉmMessage‚Ì“à—e‚ğ•\¦‚·‚éB
*/
void HelloWorld::say() {
	printf(mMessage.c_str());
};
