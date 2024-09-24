#ifndef BANK_H
#define BANK_H

#include <vector>
#include <string>

class Transaction
{
public:
	Transaction(double amount, std::string date);
	double amount;
	std::string date;
};

class Bank
{
private:
	std::vector<Transaction> history;
public:
	Bank();
	Transaction getLastOperation();
	void makeTransaction(Transaction t);
};

class DebitCard : Bank
{
private:
	double balance;
public:
	DebitCard();
	double checkBalance();
	void makeTransaction(double amount);
};

class CreditCard : Bank
{
private:
	double creditLimit;

public:
	CreditCard(double limit);
	void makeTransaction(double amount);
	double checkCreditLimit();
};
#endif