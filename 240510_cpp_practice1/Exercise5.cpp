#include <iostream>

#include "Character.h"
#include "Monster.h"

using namespace std;


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

		if (character.ManipulateCharacter(option) == 0) return 0;
	}
}