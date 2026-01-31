#include "CCurrentAccount.hpp"

void CCurrentAccount::Withdrawal(float amount)
{
	float balance;

	balance = GetBalance();
	const float overdraft = -5000;

	if (balance - amount > overdraft)
	{
		ChangeBalance(balance -= amount);
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
	float iunterest = ((balance / 100) * 5);

	if (balance < minus)
	{
		ChangeBalance(balance - iunterest);

		std::cout << iunterest << " Charged" << " Reamining Balance " << GetBalance();
	} 




}
