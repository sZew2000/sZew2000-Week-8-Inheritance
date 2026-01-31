#include <iostream>
#pragma once

class CAccount
{
private:
    float mBalance;
public:
    void ChangeBalance(float amount);
    float GetBalance();
    void Deposit(float amount);
    virtual void Withdrawal(float amount) = 0;
    virtual void Interest() = 0;
};
