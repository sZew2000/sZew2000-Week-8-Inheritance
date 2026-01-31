#include <iostream> 
#include "CBook.hpp" 
#pragma once

using namespace std; 

class CBookSeries : public CBook
{

private: 
	string mSeriesTitle; 
	string mSeriesEditor; 
public: 
	
	CBookSeries(string mTitle, string mAuthor, string series, string editor);
	void GetSeriesDetails(string& series, string& editor);




};