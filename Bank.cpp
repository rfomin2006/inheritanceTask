#include "Bank.h"

Transaction::Transaction(double amount, std::string date)
{
	this->amount = amount;
	this->date = date;
}

Bank::Bank()
{
	this->history = std::vector<Transaction>();
}

Transaction Bank::getLastOperation()
{
	return this->history.back();
}

void Bank::makeTransaction(Transaction t)
{
	this->history.push_back(t);
}

DebitCard::DebitCard()
{
	this->balance = 0;
}

double DebitCard::checkBalance()
{
	return this->balance;
}

void DebitCard::makeTransaction(double amount)
{
	this->balance += amount;
}

CreditCard::CreditCard(double limit)
{
	this->creditLimit = limit;
}

void CreditCard::makeTransaction(double amount)
{
	amount > this->creditLimit 
		? throw "Amount must be lesser or equal credit limit" 
		: this->creditLimit -= amount;
}

double CreditCard::checkCreditLimit()
{
	return this->creditLimit;
}
