#pragma once
#include "cppstudy01.h"

using namespace std;

class speaker {
private:
	string mMessage;

public:
	/*
	* �R���X�g���N�^�\
	*/
	speaker();

	/*
	* �f�X�g���N�^�[
	*/
	~speaker();

	/*
	* ��ʂ�mMessage�̓��e��\������B
	*/
	void speak();
};