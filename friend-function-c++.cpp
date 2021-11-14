#include <iostream>
using namespace std;

class A; //Khai báo lớp A
class B; //Khai báo lớp B

//Định nghĩa lớp A
class A{
private:
	int numA;
public:
	A(int a){
		numA = a;
	}
	//Khai báo hàm cong là bạn của A
	friend int cong(A, B);
};
//Định nghĩa lớp B
class B{
private:
	int numB;
public:
	B(int b){
		numB = b;
	}
	//Khai báo hàm cong là bạn của B
	friend int cong(A, B);
};
//Hàm cong() là hàm bạn của lớp A và B, có thể truy cập thành viên numA và numB
int cong(A a, B b){
	return (a.numA + b.numB);
}
void main()
{
	A a(10);
	B b(20);
	cout<<"Tong: "<<cong(a, b);
	system("pause");
}