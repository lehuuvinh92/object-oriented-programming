#include <iostream>
using namespace std;

class Counter{
private:
	int count;
public:
	Counter(){
		count=0;
	}
	int getCount(){
		return count;
	}
	Counter operator ++(){//hàm nạp chồng toán tử
		count = count + 1;
		Counter temp;
		temp.count = count;
		return temp;
	}
};

class Distance{
private:
	int feet;
	float inches;
public:
	Distance(){
		feet = 0;
		inches = 0;
	}
	Distance(int ft, float in){
		feet = ft;
		inches = in;
	}
	void getdist(){
		cout << "Enter feet : "; cin >> feet;
		cout << "Enter inches : "; cin >> inches;
	}
	void showdist(){
		cout << feet << "\' - " << inches << '\"';
	}
	Distance operator + (Distance d2){//hàm nạp chồng toán tử
		int f = feet + d2.feet;
		float i = inches + d2.inches;
		if (i >= 12.0){
			i -= 12.0;
			f++;
		}
		return Distance(f, i);
	}
};

void main()
{
	Counter c1, c2;
	cout << "count of c1 = " << c1.getCount();
	cout << "\ncount of c2 = " << c2.getCount() << endl;
	++c1;
	c2 = ++c1;
	cout << "count of c1 = " << c1.getCount();
	cout << "\ncount of c2 = " << c2.getCount() << endl;

	Distance dist1, dist3, dist4;
	dist1.getdist();
	Distance dist2(11, 6.25);
	dist3 = dist1 + dist2;
	dist4 = dist1 + dist2 + dist3;
	//display all lengths
	cout << "dist1 = "; dist1.showdist(); cout << endl;
	cout << "dist2 = "; dist2.showdist(); cout << endl;
	cout << "dist3 = "; dist3.showdist(); cout << endl;
	cout << "dist4 = "; dist4.showdist(); cout << endl;
	system("pause");
}
