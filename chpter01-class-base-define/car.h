#ifndef _CAR_H_
#define _CAR_H_

class Car {
public:
	Car(int price,int carNum);//声明构造函数
	void run();
	void stop();
	void setProperty(int price, int carNum);
	void print();
private:
	int m_price;
	int m_carNum;
};

#endif
