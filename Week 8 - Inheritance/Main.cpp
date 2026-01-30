#define _CRTDBG_MAP_ALLOC 
#include <crtdbg.h>
#include <iostream>
#include "CPayRoll.hpp"
#include "CHourlyPaid.hpp" 
#include "CMonthlyPaid.hpp"
#pragma once

using namespace std;    

void start(); 
void outEmpDetails(string name , int id); 
void outEmpDetails(string name, int id , float* pay );


int main()
{
	start();

	_CrtDumpMemoryLeaks();
	

}	  

void start()
{

	CPayRoll* SevRoll = new CPayRoll("Sev", 1001);
	CHourlyPaid* SevsOtherRoll = new CHourlyPaid("Sev", 1002);
	CMonthlyPaid* SevsOtherOtherRoll = new CMonthlyPaid("Sev", 1003, 47000);

	string _name;
	int _id;
	float* pay = new float;
	SevRoll->GetDetails(_name, _id);

	outEmpDetails(_name, _id);

	float hWorked = 37.5;
	float hRate = 16.5;

	SevsOtherRoll->setHoursWorked(hWorked, hRate);
	SevsOtherRoll->GetDetails(_name, _id);
	*pay = SevsOtherRoll->Pay();   

	outEmpDetails(_name, _id, pay);	  

	SevsOtherOtherRoll->SetSalary(47500); 
	*pay = SevsOtherOtherRoll->Pay(); 

	outEmpDetails(_name, _id, pay);
	
	delete pay;
	delete SevRoll;
	delete SevsOtherRoll;




}

void outEmpDetails(string name, int id)
{
	cout << "Name on Payroll is " << name << "ID of User is " << id << endl;
}

void outEmpDetails(string name, int id, float* pay)
{
	cout << "Name on Payroll is " << name << " ID of User is " << id << " Payment Due: " << *pay << endl;
}
