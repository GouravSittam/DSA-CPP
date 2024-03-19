#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream of("result.txt");
	of<<"Hello\n"<<endl;

	of.close();
	cout<<"data saved\n";
	
	char s[10];
	ifstream inf("result.txt");
	inf>>s;
	inf.close();
	cout<<s;
	
	return 0;
}
