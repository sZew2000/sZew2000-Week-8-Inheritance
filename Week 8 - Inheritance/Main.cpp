#include <iostream> 
#include "CAccount.hpp"
#include "CCurrentAccount.hpp"
#include "CDepositAccount.hpp"
#include "CInvestmentAccount.hpp"

using namespace std; 


int main()
{

	CAccount* myCurrentAccount = new CCurrentAccount; 
	CAccount* myDepositAccount = new CDepositAccount; 
	CAccount* myInvestmentAccount = new CInvestmentAccount; 

	float myBalance = 3000;

	myCurrentAccount->Deposit(myBalance); 
	myCurrentAccount->Withdrawal(4000);
	myCurrentAccount->Interest();

	cout << endl;

	myDepositAccount->Deposit(myBalance);
	myDepositAccount->Withdrawal(2000);
	myDepositAccount->Interest();

	cout << endl;

	myInvestmentAccount->Deposit(myBalance);
	myInvestmentAccount->Withdrawal(2000);
	myInvestmentAccount->Interest();






}