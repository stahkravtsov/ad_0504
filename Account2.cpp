#include <iostream>
#include <string>
#include "Account2.h"
#include "Money.h"
using namespace std;

Account2::Account2(string Name, int N, double Percent, Money Sum) {
		mName = Name;
		mN = N;
		mPercent = Percent;
		mSum = Sum;
}

void Account2::ChangeName(string Name) {
		mName = Name;
}

void Account2::Withdrow(double Sum) {
		mSum.Withdrow(Sum);
}

void Account2::Put(double Sum) {
		mSum.Put(Sum);
}
