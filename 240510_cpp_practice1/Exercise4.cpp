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
		cout << "- ������ �̸� �Է�: ";
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
			<< "�̸�: " << getName() << endl
			<< "����: " << getLevel() << endl
			<< "������ ��: " << getItem_num() 
			<< "------------------" << endl;
		break;
	}
	return option;
}

int main()
{
	int option;

	cout << "* ���� ĳ���� ���� ���α׷� *" << endl
		<< "------------------------------------" << endl
		<< "[�޴�]" << endl
		<< "1�� �Է��ϸ�, �̸� ����" << endl
		<< "2�� �Է��ϸ�, level up" << endl
		<< "3�� �Է��ϸ�, item �ݱ� (������ �� 1�� ����)" << endl
		<< "4�� �Է��ϸ�, item ��� (������ �� 1�� ����)" << endl
		<< "5�� �Է��ϸ�, �̸�, level, item ���� �ֿܼ� ���" << endl
		<< "0�� �Է��ϸ�, ���� ����" << endl
		<< "------------------------------------" << endl;

	Character character("�⺻ �̸�");

	while (1)
	{
		cout << endl << "����� �Է�: ";
		cin >> option;

		if(character.ManipulateCharacter(option) == 0) return 0;
	}
}