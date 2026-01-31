#include "CDepositAccount.hpp"

void CDepositAccount::Withdrawal(float amount)
{
	float balance;

	balance = GetBalance();
	const float overdraft = 0;

	if (balance - amount > overdraft)
	{
		ChangeBalance(balance -= amount);
		std::cout << "Balance is now " << balance << std::endl;
	}
	else
	{
		std::cout << "cannot proces transactions, account limit hit" << std::endl;
	}
}


void CDepositAccount::Interest()
{
	const float balance = GetBalance();
	const float accMinimum = 0;
	float interest = (balance * 0.05);

	if (balance > accMinimum)
	{
		ChangeBalance(balance + interest);

		std::cout << interest << " Paid" << " Reamining Balance " << GetBalance() << std::endl;
	}
}