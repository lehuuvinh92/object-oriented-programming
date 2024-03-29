#include <iostream>
#include <string>
using namespace std;

class Animal{
private:
	string type;
public:
    // constructor to initialize type
    Animal(){
		type = "Animal";
	}
    // declare virtual function
    virtual string getType(){
        return type;
    }
};

class Dog : public Animal{
private:
	string type;
public:
    // constructor to initialize type
    Dog(){
		type = "Dog";
	}

    string getType(){
        return type;
    }
};

class Cat : public Animal{
private:
	string type;
public:
    // constructor to initialize type
    Cat(){
		type = "Cat";
	}

    string getType(){
        return type;
    }
};

void print(Animal* ani) {
    cout<<"Animal: "<<ani->getType()<< endl;
}

void main(){
Animal* animal1 = new Animal();
    Animal* dog1 = new Dog();
    Animal* cat1 = new Cat();

    print(animal1);
    print(dog1);
    print(cat1);
	system("pause");
}