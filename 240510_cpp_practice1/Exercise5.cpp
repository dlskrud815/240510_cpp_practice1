#include <iostream>

#include "Character.h"
#include "Monster.h"

using namespace std;


int main()
{
	int option;

	cout << "* 게임 캐릭터 생성 프로그램 *" << endl
		<< "------------------------------------" << endl
		<< "[메뉴]" << endl
		<< "1을 입력하면, 이름 변경" << endl
		<< "2을 입력하면, level up" << endl
		<< "3을 입력하면, item 줍기 (아이템 수 1씩 증가)" << endl
		<< "4을 입력하면, item 사용 (아이템 수 1씩 감소)" << endl
		<< "5을 입력하면, 이름, level, item 수를 콘솔에 출력" << endl
		<< "0을 입력하면, 게임 종료" << endl
		<< "------------------------------------" << endl;

	Character character("기본 이름");

	while (1)
	{
		cout << endl << "사용자 입력: ";
		cin >> option;

		if (character.ManipulateCharacter(option) == 0) return 0;
	}
}