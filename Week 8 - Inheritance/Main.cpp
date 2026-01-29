#define _CRTDBG_MAP_ALLOC 
#include <crtdbg.h>
#include <iostream>
#include "CPayRoll.hpp"
#include "CHourlyPaid.hpp"
#pragma once

using namespace std; 


int main()
{
	CPayRoll* SevRoll = new CPayRoll("Sev", 1000);
	CHourlyPaid* SevsOtherRoll = new CHourlyPaid("Sev", 1000); 

	string _name;
	int _id;   
	float* pay = new float;
	SevRoll->GetDetails(_name, _id);  

	cout << "Name on Payroll is " << _name << "ID of User is " << _id << endl;

	float hWorked = 37.5;
	float hRate = 16.5;
	
	SevsOtherRoll->setHoursWorked(hWorked, hRate);
	SevsOtherRoll->GetDetails(_name, _id);
	*pay = SevsOtherRoll->Pay();

	cout << "Name on Payroll is " << _name << "ID of User is " << _id << "Payment Due: " << *pay;

	_CrtDumpMemoryLeaks();
	

}	