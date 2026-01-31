#include <iostream>
#include "CAccount.hpp"
#pragma once

class CDepositAccount : public CAccount
{

public:

	void Withdrawal(float amount);
	void Interest();



};