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

	std::cout << "Balance is now: " << GetBalance() << std::endl;
}



