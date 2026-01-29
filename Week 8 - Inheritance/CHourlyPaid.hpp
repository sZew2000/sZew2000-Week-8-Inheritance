#include <iostream>
#include "CPayRoll.hpp"
#pragma once
using namespace std; 


class CHourlyPaid : public CPayRoll
{
private: 

	float mHoursWorked; 
	float mHourlyRate; 
	float* AmountPaid = new float;
	
public:

	CHourlyPaid(string name, int id);
	~CHourlyPaid();	 
	void setHoursWorked(float hoursWorked, float rate);
	void GetPay(float pay);
	float Pay();

};



