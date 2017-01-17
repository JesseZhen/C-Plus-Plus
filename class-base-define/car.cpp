#include <iostream>
#include "car.h"
using namespace::std;

Car::Car(int price,int carNum){
	cout<<"constuctor difined"<<endl;
	setProperty(price, carNum);
}

void Car::run() {
	cout << "Car Run" << endl;
}

void Car::stop() {
	cout << "Car stop" << endl;
}

void Car::setProperty(int price, int carNum) {
	m_price = price;
	m_carNum = carNum;
}

void Car::print() {
	cout << m_price <<" "<< m_carNum << endl;
}
