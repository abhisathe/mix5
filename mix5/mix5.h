#include<iostream>
#include<conio.h>
#include<string>
#include<string.h>
using namespace std;
class Cstring {
	char s1[20];
	char s2[20];
	int x;
public:
	Cstring();
	Cstring(char *,char *);
	Cstring(int, char*);
	//Cstring(Cstring&);
	void accept();
	void display();
	~Cstring();
	Cstring& operator==(Cstring);
	Cstring& operator[](Cstring);
	Cstring& operator<<(Cstring);
	Cstring& operator>>(Cstring);
	Cstring& operator=(Cstring);

};