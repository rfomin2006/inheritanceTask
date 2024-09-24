#include "Bank.h"
#include <iostream>

int main() {
	Bank bank;
	DebitCard dCard;
	CreditCard cCard(25000);
	std::cout << "Bank:\n\t";
	bank.makeTransaction(Transaction(-2000, "2020-02-02"));
	std::cout << "Last operation:\n\t\t" << "Date: " << bank.getLastOperation().date
		<< "\n\t\tAmount: " << bank.getLastOperation().amount << std::endl;
	std::cout << "Debit card:\n\t";
	std::cout << "Base balance: " << dCard.checkBalance() << "\n\t";
	dCard.makeTransaction(5000);
	std::cout << "After transaction: " << dCard.checkBalance() << std::endl;
	std::cout << "Credit card:\n\t";
	std::cout << "Credit limit: " << cCard.checkCreditLimit() << "\n\t";
	cCard.makeTransaction(10000);
	std::cout << "Credit limit after operation: " << cCard.checkCreditLimit() << std::endl;
	return 0;
}