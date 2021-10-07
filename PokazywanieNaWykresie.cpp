#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

string xy(int a, int b){
	if(a==0){
		if(b>0){
			return "Na lini y na gorze";
		}
		else if(b<0){
			return "Na lini y na dole";
		}
		else{
			return "Punkt 0 0";
		}
	}
	if(a>0){
		if(b>0){
			return "Prawa gorna";
		}
		else if(b<0){
			return "Prawa dolna";
		}
		else{
			return "Na lini x po prawej";
		}
	}
	if(a<0){
		if(b>0){
			return "Lewa gorna";
		}
		else if(b<0){
			return "Lewa dolna";
		}
		else{
			return "Na lini x po lewej";
		}
	}
}

int main() {

    fstream plik;
    int x; 
    int y;
    plik.open("wsp.txt", ios::in);
	ofstream MyFile("wynik.txt");
    if(plik.good() == true)
    {
        while(!plik.eof())
        {
        plik >> x >> y;
 		MyFile<<x<<" "<<y<<" "<<xy(x,y)<<'\n';
        }
        plik.close();
	}
  	
	MyFile.close();
	
	cout<<"Wykonano plik wynik.txt w tym samym folderze"<<'\n';
	
	system("PAUSE");
	
	return 0;
  
}
