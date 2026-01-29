#include <iostream>
#include "CPayRoll.hpp"
#pragma once
using namespace std; 


class CHourlyPaid : public CPayRoll
{
private: 

	float mHoursWorked; 
	float mHourlyRate; 
	
public:

	CHourlyPaid(string name, int id);
	~CHourlyPaid();	 
	void setHoursWorked(float hoursWorked, float rate);
	float Pay();

};



