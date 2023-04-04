#include <iostream>
#include "Money.h"
#include "Account1.h"
#include "Account2.h"

int main() {
		Money M1(336.98);
		Account1 aFirst("Stepan", 1003203, 0.2, &M1);
		Account2 aSecond("Andrii", 3330056, 0.3, Money(150.33));

		cout<<aFirst;
		aFirst.Put(100.03);
		cout<<aFirst;
}