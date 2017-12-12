#include <iostream>
#include <fstream>
using namespace std;

//void countLine(string pName);
//void countChar(string pName);

int main() {
	string filename;
	cout << "Enter file name\n";
	cin >> filename;
	ifstream ifs("filename.txt");
	string str((istreambuf_iterator<char>(ifs)),istreambuf_iterator<char>());
	cout << str; 
	
}
/*
void countLine(string pName){


}

void countChar(string pName){
	int count = 0;
	int off
	while (*(
}
*/


