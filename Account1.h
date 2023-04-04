#ifndef ACCOUNT1_H
#define ACCOUNT1_H
#include <string>
#include "Money.h"
using namespace std;

class Account1 {
private:
		string mName;
		int mN;
		double mPercent;
		Money* mSum;
public:
		Account1(): mName(""), mN(0), mPercent(0), mSum(nullptr) {}

		Account1(string Name, int mN, double mPercent, Money* Sum);

		void ChangeName(string Name);

		void Withdrow(double Sum);

		void Put(double Sum);

		friend ostream& operator<<(ostream& out, const Account1& First);
};

#endif // !ACCOUNT1_H
