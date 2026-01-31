#include <iostream> 
#include "CAccount.hpp"
#include "CCurrentAccount.hpp"
#include "CDepositAccount.hpp"

using namespace std; 


int main()
{

	CAccount* myCurrentAccount = new CCurrentAccount; 
	CAccount* myDepositAccount = new CDepositAccount; 

	float myBalance = 3000;

	myCurrentAccount->Deposit(myBalance); 
	myCurrentAccount->Withdrawal(4000);
	myCurrentAccount->Interest();


	myDepositAccount->Deposit(myBalance);
	myDepositAccount->Withdrawal(2000);
	myDepositAccount->Interest();








}