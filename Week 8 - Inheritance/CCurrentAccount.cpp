#include "CCurrentAccount.hpp"

void CCurrentAccount::Withdrawal(float amount)
{
	float balance;

	balance = GetBalance();
	const float overdraft = -5000;

	if (balance - amount > overdraft)
	{
		ChangeBalance(balance -= amount);

		std::cout << "Balance is now " << balance << std::endl;

	}
	else
	{
		std::cout << "balance limit hit" << std::endl;
	}
}

void CCurrentAccount::Interest()
{
	const float balance = GetBalance();
	const float minus = -1; 
	float interest = ((balance*-1) * 0.03);

	if (balance < minus)
	{
		ChangeBalance((balance - interest));

		std::cout << interest << " Charged" << " Reamining Balance " << GetBalance() << std::endl;
	} 
}
