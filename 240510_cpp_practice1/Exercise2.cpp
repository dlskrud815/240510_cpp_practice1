#include <iostream>

using namespace std;

class Rectangle
{
public:
	Rectangle() {}

	Rectangle(float width, float height)
	{
		cout << "�Ϲ� ������" << endl;
		this->m_width = width;
		this->m_height = height;
	}

	//���� ������
	Rectangle(const Rectangle& other);

	float Area();

private:
	float m_width = 0;
	float m_height = 0;
};

float Rectangle::Area()
{
	return m_width * m_height;
}

Rectangle::Rectangle(const Rectangle& other)
{
	cout << "���� ������" << endl;
	this->m_width = other.m_width;
	this->m_height = other.m_height;
}

int main()
{
	//1. �ٸ� Ŭ���� ������ ����(���� ������)
	Rectangle rec1{ 4, 5 };
	Rectangle rec2 = rec1;

	//2. ������ ������ area()�Լ� ȣ���ؼ� ���� ���ϱ�
	cout << "���̴�: " << rec2.Area() << endl;

	//3. �⺻�����ڷ� ������ �ٸ� Ŭ���� ������ �����ϱ�
	Rectangle rec3;
	rec3 = rec1;

	cout << "���̴�: " << rec3.Area() << endl;
	return 0;
}