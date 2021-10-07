#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

string check(string a){

	if(a.length()>=8){
		if(a.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890")!=string::npos){
			return string(a);
		}
	}
	return "";

}

int main() {

    fstream plik;
    string pass; 
    plik.open("hasla.txt", ios::in);
	ofstream MyFile("passwords.txt");
    if(plik.good() == true)
    {
        while(!plik.eof())
        {
        plik>>pass;
 		MyFile<<check(pass)<<'\n';
        }
        plik.close();
	}
  	
	MyFile.close();
	
	cout<<"Wykonano plik passwords.txt w tym samym folderze"<<'\n';
	
	system("PAUSE");
	
	return 0;
  
}
