#include "CHourlyPaid.hpp"

CHourlyPaid::CHourlyPaid(string name, int id) : CPayRoll(name , id)
{

	mHoursWorked = 0.0f; 
	mHourlyRate = 0.0f;

}

CHourlyPaid::~CHourlyPaid()
{
}

void CHourlyPaid::setHoursWorked(float hoursWorked, float rate)
{

	mHoursWorked = hoursWorked; 
	mHourlyRate = rate;

}

float CHourlyPaid::Pay()
{
	float* Pay = new float; 

	*Pay = mHoursWorked * mHourlyRate;

	return *Pay;
}
