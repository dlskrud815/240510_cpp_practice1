#include <iostream>

using namespace std;

class Rectangle
{
public:
	Rectangle() {}

	Rectangle(float width, float height)
	{
		m_width = width;
		m_height = height;
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

	cout << "사각형의 가로와 세로 길이를 입력해주세요. (띄어쓰기로 구분) ";
	cin >> width >> height;
	Rectangle rec{ width, height };
	//Rectangle rec;

	cout << "넓이는: " << rec.Area();

	return 0;
}