// Перегрузка операторів.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Point {
private:
	double x;
	double y;
public:
	Point()
	{
		x = 0;
		y = 0;
		cout << this << "constructor" << endl;
	}
	Point(int valueX, int valueY) {
		x = valueX;
		y = valueY;
		cout << this << "constructor" << endl;
	}
	void input() {
		cout << "Enter x and y" << endl;
		cin >> x >> y;
	}
	void output() {
		cout << x << " " << y << endl;
	}	
	Point operator +(const Point& other) {
		Point temp;
		temp.x = this->x + other.x;
		temp.y = this->y + other.y;
		return temp;
	}
	Point operator -(const Point& other) {
		Point temp;
		temp.x = this->x - other.x;
		temp.y = this->y - other.y;
		return temp;
	}
	Point operator *(const Point& other) {
		Point temp;
		temp.x = this->x * other.x;
		temp.y = this->y * other.y;
		return temp;
	}
	Point operator /(const Point& other) {
		Point temp;
		temp.x = this->x / other.x;
		temp.y = this->y / other.y;
		return temp;
	}	
};

int main()
{
	Point a;
	a.input();
	Point b;
	b.input();
	Point c = a + b;
	c.output();
	Point d = a - b;
	d.output();
	Point e = a * b;
	e.output();
	Point f = a / b;
	f.output();
}


