#include "Money.h"

Money::Money(double dSum) {
		this->SetMoney(dSum);
}

void  Money::SetMoney(double dSum) {
		m500 = dSum / 500;
		dSum -= m500 * 500;

		m200 = dSum / 200;
		dSum -= m200 * 200;

		m100 = dSum / 100;
		dSum -= m100 * 100;

		m50 = dSum / 50;
		dSum -= m50 * 50;

		m20 = dSum / 20;
		dSum -= m20 * 20;

		m10 = dSum / 10;
		dSum -= m10 * 10;

		m5 = dSum / 5;
		dSum -= m5 * 5;

		m2 = dSum / 2;
		dSum -= m2 * 2;

		m1 = dSum / 1;
		dSum -= m1 * 1;

		m05 = dSum / 0.5;
		dSum -= m05 * 0.5;

		m025 = dSum / 0.25;
		dSum -= m025 * 0.25;

		m01 = dSum / 0.1;
		dSum -= m01 * 0.1;

		m005 = dSum / 0.05;
		dSum -= m005 * 0.05;

		m001 = dSum / 0.01;
		dSum -= m001 * 0.01;

}

double Money::GetMoney() const {
		double dSum = 0;
		dSum += m500 * 500;

		dSum += m200 * 200;

		dSum += m100 * 100;

		dSum += m50 * 50;

		dSum += m20 * 20;

		dSum += m10 * 10;

		dSum += m5 * 5;

		dSum += m2 * 2;

		dSum += m1 * 1;

		dSum += m05 * 0.5;

		dSum += m025 * 0.25;

		dSum += m01 * 0.1;

		dSum += m005 * 0.05;

		dSum += m001 * 0.01;

		return dSum;
}

ostream& operator<<(ostream& out, const Money& money) {
		double dSum = money.GetMoney();
		int iSum = dSum / 1;
		double dNewSum = dSum - (double)iSum;
		dNewSum *= 100;
		int iNewSum = dNewSum;
		out << iSum << "," << dNewSum;
		return out;
}


void Money::Withdrow(double Sum) {
		this->SetMoney(this->GetMoney() - Sum);
}

void Money::Put(double Sum) {
		this->SetMoney(this->GetMoney() + Sum);
}