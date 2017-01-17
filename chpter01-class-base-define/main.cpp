#include <iostream>
#include "car.h"

using namespace::std;


void foo(Car *pcar){	//通过指针调用成员函数
	pcar->print();
	pcar->stop();
}

void bar(Car& rcar){	//通过引用调用成员函数,调用a对象的引用
	rcar.print();
	rcar.stop();
}

int main()
{
	Car a(5000,5000);
	cout<<"end of constuctor"<<endl;
	a.print();
	a.setProperty(20000,20000);
	a.print();
	cout << "the adress of a is: " << &a << endl;
	a.run();
	foo(&a);
	bar(a);
	return 0;
}
