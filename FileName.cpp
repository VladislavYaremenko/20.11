#include <iostream>
using namespace std;


class Rectangle
{
private:
	int x;
	int y;
	int height;
	int width;
public:
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	int getHeight()
	{
		return height;
	}
	int getWidth()
	{
		return width;
	}
	void setX(int n)
	{
		x = n;
	}
	void setY(int n)
	{
		y = n;
	}
	void setHeight(int n)
	{
		height = n;
	}
	void setWidth(int n)
	{
		width = n;
	}
	void createRectangle(Rectangle& rectangle)
	{
		int x;
		cout << "Enter x: " << endl;
		cin >> x;
		rectangle.setX(x);
		cout << "Enter y: " << endl;
		cin >> x;
		rectangle.setY(x);
		cout << "Enter Height: " << endl;
		cin >> x;
		rectangle.setHeight(x);
		cout << "Enter Width: " << endl;
		cin >> x;
		rectangle.setWidth(x);
	}
	void showRectangle()
	{
		cout << "X: " << getX() << " Y: " << getY() << endl << "Height: "<< getHeight() << " Width: " << getWidth()<< endl;
	}
};


int main()
{
	Rectangle r1;
	r1.createRectangle(r1);
	r1.showRectangle();
	return 0;
}