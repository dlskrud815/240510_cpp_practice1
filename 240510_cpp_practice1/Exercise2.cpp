#include <iostream>

using namespace std;

class Rectangle
{
public:
	Rectangle() {}

	Rectangle(float width, float height)
	{
		cout << "일반 생성자" << endl;
		this->m_width = width;
		this->m_height = height;
	}

	//복사 생성자
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
	cout << "복사 생성자" << endl;
	this->m_width = other.m_width;
	this->m_height = other.m_height;
}

int main()
{
	//1. 다른 클래스 변수에 복사(복사 생성자)
	Rectangle rec1{ 4, 5 };
	Rectangle rec2 = rec1;

	//2. 복사한 변수의 area()함수 호출해서 넓이 구하기
	cout << "넓이는: " << rec2.Area() << endl;

	//3. 기본생성자로 생성된 다른 클래스 변수에 복사하기
	Rectangle rec3;
	rec3 = rec1;

	cout << "넓이는: " << rec3.Area() << endl;
	return 0;
}