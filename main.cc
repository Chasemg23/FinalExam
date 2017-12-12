#include <iostream>
#include <fstream>
using namespace std;

//int countLine(string pName);
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
/*
int countLine(string pName){
	int count = 0;
	int pos = 0;
	while ((pos = pName.IndexOf('\n', pos)) != -1) {
		count++;
		pos++;
	}
	return count;
}
*/
int countChar(string pName){
	int len;
	len = pName.length();
	cout << endl << len << " Characters";
	return len;
}



