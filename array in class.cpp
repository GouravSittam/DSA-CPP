

#include<iostream>
using namespace std;
class student
{
	private:
		int rollno;
	public:
		double cgpa;
		void getdata()
		{
			cout<<"Enter roll no : ";
			cin>>rollno;
			cout<<"Enter your cgpa : ";
			cin>>cgpa;
		}
		
		void print()
		{
			cout<<rollno<<endl<<cgpa<<endl;
		}
		
		double getcgpa();
};

double student :: getcgpa()
{
	return cgpa;
}

const int sz=5;

int main()
{
	student s1[sz];
	for (int i=0;i<5;i++)
	s1[i].getdata();
	for (int i=0;i<5;i++)
	s1[i].print();
	
	
	cout<<endl<<"CGPA is : "<<s1[1].getcgpa();
	return 0;
}
