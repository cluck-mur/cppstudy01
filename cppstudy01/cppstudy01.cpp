// cppstudy01.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "cppstudy01.h"
using namespace std;

/*
* main関数
* このアプリケーションはここから開始される（エントリーポイント）
*/
int main()
{
	// speakerクラスをオブジェクト化
	speaker* pspeaker = new speaker();
	// 出力を命令する
	pspeaker->speak();

	return 0;
};
