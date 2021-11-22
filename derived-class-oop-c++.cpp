#include <iostream>
using namespace std;

class A{
private:
	int biena;
public:
	void hama(){
		biena = 0;
		cout<<"Gia tri cua bien a = "<<biena<<endl;
	}
	void nhap(){
		cout << "\nNhap gia tri cua bien a = "; cin >> biena;
	}
	void hienthi(){
		cout<<"\nGia tri cua bien a = "<<biena;
	}
};

class B: public A{
private:
	int bienb;
public:
	void hamb(){
		bienb = 1;
		cout<<"Gia tri cua bien b = "<<bienb<<endl;
	}
	void nhap(){
		cout << "\nNhap gia tri cua bien b = "; cin >> bienb;
	}
};

void main(){
	B bobject;
	bobject.nhap();
	bobject.A::nhap();
	system("pause");
}