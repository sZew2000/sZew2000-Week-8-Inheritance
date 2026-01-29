#include <iostream> 
#include "CPayRoll.hpp"
using namespace std;

CPayRoll::CPayRoll(string name, int id)
{
	mpEmployeeDetails = new SEmployee{ name , id };
	this->SetDetails(name, id);
}
CPayRoll::~CPayRoll()
{
	delete mpEmployeeDetails;
}

void CPayRoll::SetDetails(string name, int id)
{
	mpEmployeeDetails->name = name;
	mpEmployeeDetails->id = id;
}

void CPayRoll::GetDetails(string& name, int& id)
{
	name = mpEmployeeDetails->name;
	id = mpEmployeeDetails->id;
}