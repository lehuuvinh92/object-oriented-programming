#include <iostream>
using namespace std;

class Circle{
private:
	float r;
public:
	//Hàm khởi tạo mặc định
	Circle(){
		this->r = 1.0;
	}
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
};
void main()
{
	Circle* c1 = new Circle();//sử dụng hàm khởi tạo mặc định
	Circle* c2 = new Circle(3.5);//sử dụng hàm khởi tạo có tham số
	c1->setRadius(99);
	cout<<"Area of Circle c1 = "<<c1->calculateArea();
	cout<<"\nArea of Circle c2 = "<<c2->calculateArea();
	system("pause");
}
