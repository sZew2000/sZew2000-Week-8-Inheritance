#include <iostream>
#include "CAccount.hpp"
#pragma once

class CCurrentAccount : public CAccount
{

public: 

	void Withdrawal(float amount);
	void Interest();



};