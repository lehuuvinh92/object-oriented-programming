#include <iostream>
using namespace std;

class A{
public:
    void show()
    {
        cout << "Hello from A \n";
    }
};
  
class B : virtual public A{//lớp cơ sở ảo
};
  
class C : virtual public A{//lớp cơ sở ảo
};
  
class D : public B, public C{
};

void main(){
	D object;
    object.show();
	system("pause");
}