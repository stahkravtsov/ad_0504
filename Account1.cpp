#include <iostream>
#include <string>
#include "Account1.h"
#include "Money.h"
using namespace std;

Account1::Account1(string Name, int N, double Percent, Money* Sum) {
		mName = Name;
		mN = N;
		mPercent = Percent;
		mSum = Sum;
}

void Account1::ChangeName(string Name) {
		mName = Name;
}

void Account1::Withdrow(double Sum) {
		mSum->Withdrow(Sum);
}

void Account1::Put(double Sum) {
		mSum->Put(Sum);
}

ostream& operator<<(ostream& out, const Account1& First) {
		out << First.mName << " " << First.mN << " " << First.mPercent << "%  " << *First.mSum << endl;
		return out;
}