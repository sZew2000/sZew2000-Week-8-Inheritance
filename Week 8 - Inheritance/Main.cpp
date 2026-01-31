#include <iostream> 
#include "CTest.hpp" 
#include "CMessage1.hpp" 
#include "CMessage2.hpp"
using namespace std; 


int main()
{

	CTest* pMessages[4]; 

	pMessages[0] = new CMessage1;
	pMessages[1] = new CMessage2;
	pMessages[2] = new CMessage1;
	pMessages[3] = new CMessage2;

	for (int i = 0; i < 4; i++)
	{
	
		pMessages[i]->WriteMessage(); 
	
	}
		    

}