#include<iostream>
using namespace std;
class student
{
	private:
		int rollno;
		public:
			double Cgpa;
			void getdata()
			{
				cout<<"Enter rollno\n";
				cin>>rollno;
				cout<<"Enter Cgpa\n";
				cin>>Cgpa;
				
			}
			void print()
			{
				cout<<rollno<<Cgpa;
			}	
};
int main(){
	student s1;
	s1.getdata();
	s1.print();
	cout<<s1.Cgpa<<endl;
	cout<<s1.rollno<<endl;
	
	
	return 0;
}
