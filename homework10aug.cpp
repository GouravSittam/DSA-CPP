#include<iostream>
using namespace std;
class emp
{
	private:
		int empid;
	public:
		str name;
		str designation;
		double salary;
		int age;
		getdata()
		{
			cin>>empid;
			cin>>designation;
			cin>>salary;
			cin>>age;
			cin>>name;
		}
		int printdata()
		{
			return age;
		}
		
};
count int sz=10;
int main()
{
	emp e[sz];
	for(int i=0;i<sz;i++)
	{
		e[i].getdata();
	}
}
