#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void reg()
{
	string username, password;
    ofstream fout;
    	
	cout << "username $ ";
	cin >> username;
	
	cout << "password $ ";
	cin >> password;
	
	fout.open(username + ".txt");
	fout << username << "\n" << password;
}
	
int main(int argc, char *argv[])
{
	int c;
	cin >> c;
	
	if(c == 1) { reg(); }
	else if(c == 2)
	{
	    string us, pw;
	    string username, password;
        ifstream fin;
    	
    	cout << "username $ ";
	    cin >> username;
	
	    cout << "password $ ";
    	cin >> password;
    	
    	fin.open(username + ".txt");
    	fin >> us;
    	
    	fin >> pw;
    	
    	if(username == us && password == pw)
    	{
    		cout << "welcome";
    	} 
    	else
    	{
    		cout << " $";
    	}
	}
	return 0;
}
