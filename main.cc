#include <iostream>
#include <fstream>
using namespace std;

int countLine(string pName);
int countChar(string pName);

int main() {
	string filename;
	cout << "Enter file name\n";
	cin >> filename;
	ifstream ifs(filename);
	string str((istreambuf_iterator<char>(ifs)),istreambuf_iterator<char>());
	cout << str; 
	countChar(str);
	countLine(str);
	
}

int countLine(string pName){


}

int countChar(string pName){
	len = pName.length();
	cout << len << " Characters";
	return len;
}



