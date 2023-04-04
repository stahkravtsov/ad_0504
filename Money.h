#ifndef MONEY_H
#define MONEY_H
#include <iostream>
using namespace std;

class Money {
private:
		int m1, m2, m5, m10, m20, m50, m100, m200, m500, m001, m005, m01, m025, m05;
public:
		Money():
				m1(0), m2(0), m5(0), m10(0), m20(0),
				m50(0), m100(0), m200(0), m500(0),
				m001(0), m005(0), m01(0), m025(0), m05(0) {}

		Money(double dSum);


		void SetMoney(double dSum);

		double GetMoney() const;

		friend ostream& operator<<(ostream& out, const Money& Sum);

		void Withdrow(double Sum);

		void Put(double Sum);
};

#endif // !MONEY_H
