#ifndef ACCOUNT2_H
#define ACCOUNT2_H
#include <string>
#include "Money.h"
using namespace std;

class Account2 {
private:
		string mName;
		int mN;
		double mPercent;
		Money mSum;
public:
		Account2(): mName(""), mN(0), mPercent(0), mSum() {}

		Account2(string Name, int mN, double mPercent, Money Sum);

		void ChangeName(string Name);

		void Withdrow(double Sum);

		void Put(double Sum);
};

#endif // !ACCOUNT2_H
