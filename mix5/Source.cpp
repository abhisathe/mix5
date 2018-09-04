#include"mix5.h"
Cstring::Cstring() {
	strcpy(s1, "SHUBHAM");
	strcpy(s2, "Abhishek");

}
Cstring::Cstring(char *name,char *name1)
{
	strcpy(this->s1, name);
	strcpy(this->s2, name1);
}
Cstring::Cstring(int x, char *name)
{
	this->x = x;
	strcpy(this->s1, name);
}
void Cstring::accept()
{
	cout << "\n Enter String 1";
	cin >> this->s1;
	cout << "\n Enter String s2";
	cin >> this->s2;
}
void Cstring::display()
{
	cout << "\n String 1 is " << s1;
	cout << "\n String 2 is" << s2;

}
