#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int login(){
	string a,b;
	cout<<"Podaj login "<<endl;
	cin>>a;
	cin.ignore();
	cout<<"Podaj haslo "<<endl;
	cin>>b;
	
	cin.ignore();
	if(a=="ti" && b=="toor")
	{
		cout<<"Witaj techniku informatyki"<<endl;
		return 1;
	}
	else
	{
		if(a=="te" && b=="toor")
	{
			cout<<"Witaj techniku elektroniki"<<endl;
			return 2;
	}
	else
	{
			if(a=="teo" && b=="toor")
	{
				cout<<"Witaj techniku energetyki odnawialnej"<<endl;
				return 3;
	}
	else
	{
				if(a=="tm" && b=="toor")
	{
					cout<<"Witaj techniku mechatroniki"<<endl;
					return 4;
	}
	else
	{
		cout<<"Bledne haslo lub login"<<endl;
		return 0;
	}
	}
	}
	}
}

int main(){
	int wynik_logowania=login();
	if( wynik_logowania == 1 )
	{
		cout<<"Rozpoczeto modul informatyczny"<<endl;
	}
	getch();
}
