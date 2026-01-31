#include "CAccount.hpp"

void CAccount::ChangeBalance(float amount)
{
	mBalance = amount;
}

float CAccount::GetBalance()
{
	return mBalance;
}

void CAccount::Deposit(float amount)
{
	ChangeBalance(amount);
}

void CAccount::Withdrawal(float amount)
{
}

void CAccount::Interest()
{
}



