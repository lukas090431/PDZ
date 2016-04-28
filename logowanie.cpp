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
	
	if(a=="root" && b=="toor")
	{
		cout<<"Witam w lesie Walusioka"<<endl;
		
	}
	else
	{
		cout<<"Bledne haslo lub login"<<endl;
		
	}
}

int main(){
	login();
	getch();
}
