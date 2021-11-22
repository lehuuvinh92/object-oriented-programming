#include <iostream>
using namespace std;

class base1{
private:
	int x1;
protected:
	float y1;
public:
	void nhap1(){
		cout<<"\nNhap gia tri x1:";
		cin>>x1;
	}
};
class base2{
private:
	int x2;
public:
	void nhap2(){
		cout<<"\nNhap gia tri x2:";
		cin>>x2;
	}
};
class derived : public base1, public base2{
private:
	int x;
public:
	void nhap(){
		cout<<"\nNhap gia tri x:";
		cin>>x;
	}
};
void main(){
	derived obj;
	obj.nhap();
	obj.base1::nhap1();
	obj.base2::nhap2();
	system("pause");
}