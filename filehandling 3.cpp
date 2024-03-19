#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("country.txt");
    fout << "India\n";
    fout << "USA\n";
    fout << "UK\n";
    fout.close();
    fout.open("capital.txt");
    fout << "Delhi\n";
    fout << "Washington\n";
    fout << "London\n";  
    fout.close();
    const int n = 80;
    char s[n];
    ifstream fin;
    fin.open("country.txt");  
    while (fin.eof()==0)
    {
        fin.getline(s, n);
        cout << s << endl;
    }
    fin.close();

    fin.open("capital.txt");
    while (fin.eof()==0)
    {
        fin.getline(s, n);
        cout << s << endl;
    }
    fin.close();

    return 0;
}
