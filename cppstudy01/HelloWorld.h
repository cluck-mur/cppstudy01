#pragma once
#include "cppstudy01.h"

using namespace std;

class HelloWorld {
private:
	string mMessage;

public:
	/*
	* �R���X�g���N�^�\
	*/
	HelloWorld();

	/*
	* �f�X�g���N�^�[
	*/
	~HelloWorld();

	/*
	* ��ʂ�mMessage�̓��e��\������B
	*/
	void say();
};