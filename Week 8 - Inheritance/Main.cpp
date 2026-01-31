#include <iostream> 
#include "CBook.hpp"
#include "CBookSeries.hpp"
#pragma once

using namespace std; 


int main()
{

	CBook* SevsBook = new CBook("The Amazing Sever-Man","Seweryn Morys");
	CBookSeries* AlexBookSeries = new CBookSeries("Example Book", "Alex Morys", "Example Series" ,"Seweryn Morys");
	
	string bookName;
	string authorName; 
	string seriesName; 
	string seriesEditor;

	SevsBook->GetDetails(bookName, authorName); 

	cout << "Book Name: " << bookName << "Author Name: " << authorName << endl;

	AlexBookSeries->GetDetails(bookName, authorName); 
	AlexBookSeries->GetSeriesDetails(seriesName, seriesEditor);

	cout << "Book Name: " << bookName << " Author Name: " << authorName << " Series Name: " << seriesName 
			<< " Series Editor: " << seriesEditor;




}