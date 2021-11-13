#include <iostream>
using namespace std;

class Circle{
private:
	float r;
public:
	//Hàm khởi tạo có tham số
	Circle(float r){
		this->r = r;
	}
	void setRadius(float r){
		this->r = r;
	}
	float getRadius(){
		return r;
	}
	float calculateArea(){
		return 3.14 * r * r;
	}
	~Circle(){
		cout<<"Radius of circle has destroyed."<<endl;
	}
};

void main()
{
	Circle c1(3.5);
	cout<<"Area of Circle = "<<c1.calculateArea();
	system("pause");
}