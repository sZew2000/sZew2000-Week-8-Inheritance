#include <iostream>
#include "CPayRoll.hpp"
#pragma once
using namespace std;    

class CMonthlyPaid : public CPayRoll
{

private:

	float mSalary;

public: 

	CMonthlyPaid(string name , int id, float salary); 
	void SetSalary(float salary);
	float Pay();


};