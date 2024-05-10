#include <iostream>

using namespace std;

class Rectangle
{
public:
	Rectangle() {}

	Rectangle(float width, float height)
	{
		this->m_width = width;
		this->m_height = height;
	}

	float Area();

	/*
	float Area()
	{
		return m_width * m_height;
	}
	*/

private:
	float m_width = 0;
	float m_height = 0;
};

float Rectangle::Area()
{
	return m_width * m_height;
}

int main()
{
	float width, height;

	cout << "�簢���� ���ο� ���� ���̸� �Է����ּ���. (����� ����) ";
	cin >> width >> height;
	Rectangle rec{ width, height };
	//Rectangle rec;

	cout << "���̴�: " << rec.Area();

	return 0;
}