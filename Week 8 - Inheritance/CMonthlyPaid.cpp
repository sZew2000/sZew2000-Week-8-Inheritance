#include "CMonthlyPaid.hpp"

CMonthlyPaid::CMonthlyPaid(string name, int id, float salary) : CPayRoll(name , id)
{
	mSalary = salary;
}

void CMonthlyPaid::SetSalary(float salary)
{
	mSalary = salary;

}

float CMonthlyPaid::Pay()
{
	float pay;

	pay = mSalary / 12;

	return pay;
}