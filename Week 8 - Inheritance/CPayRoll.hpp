#include <iostream> 

using namespace std;

struct SEmployee
{
	string name;
	int id;
};

class CPayRoll
{
private:
	SEmployee* mpEmployeeDetails;
public:

	CPayRoll(string name, int id);
	~CPayRoll();
	void SetDetails(string name, int id);
	void GetDetails(string& name, int& id);
};