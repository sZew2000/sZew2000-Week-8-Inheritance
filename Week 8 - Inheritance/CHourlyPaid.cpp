#include "CHourlyPaid.hpp"

CHourlyPaid::CHourlyPaid(string name, int id) : CPayRoll(name , id)
{

	mHoursWorked = 0.0f; 
	mHourlyRate = 0.0f;

}

CHourlyPaid::~CHourlyPaid()
{
	delete AmountPaid;
}

void CHourlyPaid::setHoursWorked(float hoursWorked, float rate)
{

	mHoursWorked = hoursWorked; 
	mHourlyRate = rate;

}

float CHourlyPaid::Pay()
{
	*AmountPaid = mHoursWorked * mHourlyRate;

	return *AmountPaid;
}

void CHourlyPaid::GetPay(float pay)
{
	pay = *AmountPaid;

}