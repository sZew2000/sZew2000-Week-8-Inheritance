#include <iostream> 


using namespace std; 

class CBook
{

private: 
	string mTitle;
	string mAuthor; 
public:
	CBook(string title, string author); 
	void SetDetails(string title, string author); 
	void GetDetails(string& title, string& author); 




};