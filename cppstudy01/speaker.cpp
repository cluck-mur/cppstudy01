#include "cppstudy01.h"

using namespace std;

speaker::speaker() {
	mMessage = "HelloWorld!!";
};

speaker::~speaker() {
};

/*
* ‰æ–Ê‚ÉmMessage‚Ì“à—e‚ğ•\¦‚·‚éB
*/
void speaker::speak() {
	printf(mMessage.c_str());
};
