#pragma once
#include "cppstudy01.h"

using namespace std;

class speaker {
private:
	string mMessage;

public:
	/*
	* コンストラクタ―
	*/
	speaker();

	/*
	* デストラクター
	*/
	~speaker();

	/*
	* 画面にmMessageの内容を表示する。
	*/
	void speak();
};