#include <iostream>
using namespace std;
class Room{
private:
	int capacity;
public:
	double length;
	double breadth;
	double height;

public:
	void setSizeRoom(double rLength, double rBreadth, double rHeight){
		length = rLength;
		breadth = rBreadth;
		height = rHeight;
	}
	double calculateArea(){
		return length * breadth;
	}
	double calculateVolume(){
		return length * breadth * height;
	}
	void setCapacity(int rCapacity){
		capacity = rCapacity;
	}
	int getCapacity(){
		return capacity;
	}
};
void main()
{
	Room r;//khai báo đối tượng
	r.setSizeRoom(9.5, 7.3, 4.8);
	cout<<"Area of Room = "<<r.calculateArea();
	r.setCapacity(50);
	cout<<"\nCapacity of Room = "<<r.getCapacity();//Truy cập thuộc tính private gián tiếp qua hàm
	system("pause");
}