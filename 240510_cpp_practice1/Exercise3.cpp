#include <iostream>

using namespace std;

class Rectangle
{
public:
	Rectangle() {}

	Rectangle(float width, float height)
	{
		//cout << "일반 생성자" << endl;
		this->m_width = width;
		this->m_height = height;
	}

	//복사 생성자
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
	cout << "복사 생성자" << endl;
	this->m_width = other.m_width;
	this->m_height = other.m_height;
}

int main()
{
	float width, height;

	Rectangle rect{ 1, 2 };
	cout << "넓이는: " << rect.Area() << endl;

	cout << "사각형의 가로와 세로 길이를 입력해주세요. (띄어쓰기로 구분) ";
	cin >> width >> height;

	rect.setWidth(width);
	rect.setHeight(height);
	cout << "넓이는: " << rect.Area() << endl
		<< "가로 세로 길이는: " << rect.getWidth() << " " << rect.getHeigiht() << endl;

	return 0;
}