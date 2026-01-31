#include "CInvestmentAccount.hpp"

void CInvestmentAccount::Interest()
{
	const float balance = GetBalance();
	const float accMinimum = 0;
	float interest = (balance * 0.08);

	if (balance > accMinimum)
	{
		ChangeBalance(balance + interest);

		std::cout << interest << " Paid" << " Reamining Balance " << GetBalance() << std::endl;
	}

}
