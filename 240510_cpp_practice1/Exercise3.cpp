#include <iostream>

using namespace std;

class Rectangle
{
public:
	Rectangle() {}

	Rectangle(float width, float height)
	{
		//cout << "�Ϲ� ������" << endl;
		this->m_width = width;
		this->m_height = height;
	}

	//���� ������
	Rectangle(const Rectangle& other);

	float Area();
	
	//getter & setter
	float getWidth() { return this->m_width; }
	float getHeigiht() { return this->m_height; }

	void setWidth(float width) { this->m_width = width; }
	void setHeight(float height) { this->m_height = height; }

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
	float width, height;

	Rectangle rect{ 1, 2 };
	cout << "���̴�: " << rect.Area() << endl;

	cout << "�簢���� ���ο� ���� ���̸� �Է����ּ���. (����� ����) ";
	cin >> width >> height;

	rect.setWidth(width);
	rect.setHeight(height);
	cout << "���̴�: " << rect.Area() << endl
		<< "���� ���� ���̴�: " << rect.getWidth() << " " << rect.getHeigiht() << endl;

	return 0;
}