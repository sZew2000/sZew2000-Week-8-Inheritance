#include "CDepositAccount.hpp"

void CDepositAccount::Withdrawal(float amount)
{
	float balance;

	balance = GetBalance();
	const float overdraft = 0;

	if (balance - amount > overdraft)
	{
		ChangeBalance(balance -= amount);
	}
	else
	{
		std::cout << "balance limit hit" << std::endl;
	}
}


void CDepositAccount::Interest()
{
	const float balance = GetBalance();
	const float accMinimum = 0;
	float interest = ((balance / 100) * 3);

	if (balance > accMinimum)
	{
		ChangeBalance(balance + interest);

		std::cout << interest << " Charged" << " Reamining Balance " << GetBalance();
	}
}