#include <iostream>

using namespace std;

class Character
{
public:
	Character(string name)
	{
		this->name = name;
		this->level = 0;
		this->item_num = 0;
	}

	int ManipulateCharacter(int option);

	string getName() { return this->name; }
	int getLevel() { return this->level; }
	int getItem_num() { return this->item_num; }

	void setName(string name) { this->name = name; }
	void setLevelUp(int level) { this->level = level + 1; }
	void setGetItem(int item_num) { this->item_num = item_num + 1; }
	void setUseItem(int item_num) { this->item_num = item_num - 1; }

private:
	string name;
	int level;
	int item_num;
	int option;
};

int Character::ManipulateCharacter(int option)
{
	string name;

	switch (option)
	{
	case 1:
		cout << "- 변경할 이름 입력: ";
		cin >> name;
		setName(name);
		break;
	case 2:
		setLevelUp(getLevel());
		break;
	case 3:
		setGetItem(getItem_num());
		break;
	case 4:
		setUseItem(getItem_num());
		break;
	case 5:
		cout << endl << "------------------"
			<< "이름: " << getName() << endl
			<< "레벨: " << getLevel() << endl
			<< "아이템 수: " << getItem_num() 
			<< "------------------" << endl;
		break;
	}
	return option;
}

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

		if(character.ManipulateCharacter(option) == 0) return 0;
	}
}