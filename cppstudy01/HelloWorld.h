#pragma once
#include "cppstudy01.h"

using namespace std;

class HelloWorld {
private:
	string mMessage;

public:
	/*
	* コンストラクタ―
	*/
	HelloWorld();

	/*
	* デストラクター
	*/
	~HelloWorld();

	/*
	* 画面にmMessageの内容を表示する。
	*/
	void say();
};