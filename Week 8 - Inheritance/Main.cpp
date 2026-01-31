#include <iostream> 
#include "CBook.hpp"
#pragma once

using namespace std; 


int main()
{

	CBook* SevsBook = new CBook("The Amazing Sever-Man","Seweryn Morys");
	
	string bookName;
	string authorName;

	SevsBook->GetDetails(bookName, authorName); 

	cout << "Book Name: " << bookName << "Author Name: " << authorName << endl;







}